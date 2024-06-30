// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "MyCharacter.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ObstacleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObstacleMesh"));
	RootComponent = ObstacleMesh;

    CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
    CollisionComponent->SetupAttachment(RootComponent);
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AObstacle::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstacle::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (AMyCharacter* Character = Cast<AMyCharacter>(OtherActor))
    {
        AllowPassage(Character);
    }
}

void AObstacle::AllowPassage(AActor* Character)
{
    if (AMyCharacter* MyCharacter = Cast<AMyCharacter>(Character))
    {
        if (MyCharacter->IsCamouflaged())
        {
            ObstacleMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            //ObstacleMesh->SetVisibility(false);
        }
    }
    
}

void AObstacle::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (AMyCharacter* Character = Cast<AMyCharacter>(OtherActor))
    {
        ObstacleMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    }
}