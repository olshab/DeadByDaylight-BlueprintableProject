#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "DBDTunableRowHandle.h"
#include "EOfferingEffectType.h"
#include "UObject/NoExportTypes.h"
#include "BloodReceptacleOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBloodReceptacleOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _revealTimeExtensionWithOffering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseRevealTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EOfferingEffectType _offeringEffectTypeNeeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _outlineColor;

private:
	UFUNCTION(BlueprintCallable)
	void OnIntroComplete();

public:
	UBloodReceptacleOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBloodReceptacleOutlineUpdateStrategy) { return 0; }
