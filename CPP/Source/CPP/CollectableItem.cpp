// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectableItem.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/AudioComponent.h"
#include "InterfaceCollectables.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
// Sets default values
ACollectableItem::ACollectableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
	CollisionComponent->SetupAttachment(RootComponent);
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACollectableItem::OnOverlapBegin);

}

// Called when the game starts or when spawned
void ACollectableItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectableItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollectableItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor) 
	{
		bool result = OtherActor->GetClass()->ImplementsInterface(UInterfaceCollectables::StaticClass());

		result = OtherActor->Implements<UInterfaceCollectables>();

		IInterfaceCollectables* InterfaceCast = Cast<IInterfaceCollectables>(OtherActor);

		if (InterfaceCast)
		{
			InterfaceCast->OnCollected();			
		}
		if (CollectSound)
		{
			UE_LOG(LogTemp, Warning, TEXT("Playing collect sound"));
			UGameplayStatics::PlaySound2D(GetWorld(), CollectSound);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("CollectSound is not set"));
		}
		Destroy();
	}

}