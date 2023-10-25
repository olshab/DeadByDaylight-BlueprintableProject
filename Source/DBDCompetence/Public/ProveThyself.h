#pragma once

#include "CoreMinimal.h"
#include "ForAllSurvivorsStatusEffectImposer.h"
#include "Perk.h"
#include "DBDTunableRowHandle.h"
#include "ProveThyself.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UProveThyself : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _proveThyselfRange;

	UPROPERTY(EditAnywhere)
	float _speedPercentageAddedPerSurvivorRepairingInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FForAllSurvivorsStatusEffectImposer _proveThyselfEffectImposer;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorInOwnerRangeChanged(const bool inRange);

public:
	UProveThyself();
};

FORCEINLINE uint32 GetTypeHash(const UProveThyself) { return 0; }
