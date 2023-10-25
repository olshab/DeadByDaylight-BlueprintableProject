#pragma once

#include "CoreMinimal.h"
#include "VaultDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "Engine/EngineTypes.h"
#include "SlasherVaultDefinition.generated.h"

class ACharacter;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherVaultDefinition : public UVaultDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor _fallMontageID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor _crouchMontageID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor _defaultMontageID;

private:
	UFUNCTION(BlueprintCallable)
	void OnMovementModeChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);

	UFUNCTION(BlueprintCallable)
	void OnMontageBlendingOut(UAnimMontage* montage, bool interrupted);

public:
	USlasherVaultDefinition();
};

FORCEINLINE uint32 GetTypeHash(const USlasherVaultDefinition) { return 0; }
