#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Surge.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USurge : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _zoneRadius;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _instantRegression;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _cooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hasCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _useTerrorRadiusInsteadOfFixedDistance;

private:
	UFUNCTION(BlueprintPure)
	float GetZoneRadius() const;

public:
	UFUNCTION(BlueprintPure)
	float GetInstantRegressionAtLevel() const;

	UFUNCTION(BlueprintPure)
	bool GetHasCooldown() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownDurationAtLevel() const;

public:
	USurge();
};

FORCEINLINE uint32 GetTypeHash(const USurge) { return 0; }
