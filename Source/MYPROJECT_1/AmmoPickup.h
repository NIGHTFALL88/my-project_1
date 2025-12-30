#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "AmmoPickup.generated.h"

UCLASS()
class MYPROJECT_1_API AAmmoPickup : public AActor
{
    GENERATED_BODY()

public:
    AAmmoPickup(); // Constructor

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

protected:
    UPROPERTY(VisibleAnywhere, category = "components")
    USphereComponent* CollisionSphere;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup|Ammo")
    int32 AmmoAmount = 30;
};
