#pragma once

#include "CoreMinimal.h"
#include "GeneratorToolboxRepairInteraction.h"
#include "InstallBrandNewPartInteraction.generated.h"

class ACollectable;
class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInstallBrandNewPartInteraction : public UGeneratorToolboxRepairInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACollectable* _toolbox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _permanentProgressPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _existingSkillCheckDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _repairToolboxText;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnTriggerSkillCheck(ADBDPlayer* player);

public:
	UInstallBrandNewPartInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UInstallBrandNewPartInteraction) { return 0; }
