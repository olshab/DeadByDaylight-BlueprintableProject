#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "K28P02.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28P02 : public UPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PerkActivationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LockerDetectionRadius;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkActivationTime() const;

	UFUNCTION(BlueprintPure)
	float GetLockerDetectionRadius() const;

public:
	UK28P02();
};

FORCEINLINE uint32 GetTypeHash(const UK28P02) { return 0; }
