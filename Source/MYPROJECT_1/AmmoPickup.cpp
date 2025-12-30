#include "AmmoPickup.h"

AAmmoPickup::AAmmoPickup()
{
    PrimaryActorTick.bCanEverTick = false;
    AmmoAmount = 10; // default ammo amount
    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    RootComponent = CollisionSphere;

    CollisionSphere->InitSphereRadius(50.f);
    CollisionSphere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
}

void AAmmoPickup::BeginPlay()
{
    Super::BeginPlay();
}

void AAmmoPickup::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
