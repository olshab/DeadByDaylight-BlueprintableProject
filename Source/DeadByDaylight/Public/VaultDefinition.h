#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionDefinition.h"
#include "VaultDefinition.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UVaultDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag _vaultGameEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _feetOffGroundID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _feetOnGroundID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _allowedHeightDelta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFall;

protected:
	UFUNCTION(BlueprintPure)
	bool ShouldLaunchCharacter(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsWithinHeightDelta(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsWindowVaultable() const;

public:
	UVaultDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UVaultDefinition) { return 0; }
