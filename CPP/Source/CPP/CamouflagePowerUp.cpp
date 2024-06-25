// Fill out your copyright notice in the Description page of Project Settings.


#include "CamouflagePowerUp.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "MyCharacter.h" 
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
ACamouflagePowerUp::ACamouflagePowerUp()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Initialize the collision component
    CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
    RootComponent = CollisionComponent;
    CollisionComponent->SetCollisionProfileName(TEXT("Trigger"));
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACamouflagePowerUp::OnOverlapBegin);

    // Set default values
    CamouflageDuration = 10.0f;

}

// Called when the game starts or when spawned
void ACamouflagePowerUp::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void ACamouflagePowerUp::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ACamouflagePowerUp::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (AMyCharacter* Character = Cast<AMyCharacter>(OtherActor))
    {
        Character->ActivateCamouflage(CamouflageMaterial, CamouflageDuration);
        Destroy();
    }
}