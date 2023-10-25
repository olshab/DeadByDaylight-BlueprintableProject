#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "TrapCamperInteraction.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTrapCamperInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> _nonOverridableInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _trapAttachSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _updateMontageID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _updateNoScreamMontageID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _loudNoiseRangeTunable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hemorrhageEffectDurationTunable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _hemorrhageStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _mangledStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _honingStoneWarningStatusEffect;

public:
	UTrapCamperInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UTrapCamperInteraction) { return 0; }
