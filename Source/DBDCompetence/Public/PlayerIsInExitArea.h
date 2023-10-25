#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "PlayerIsInExitArea.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPlayerIsInExitArea : public UGameplayModifierCondition
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void PlayerExitExitArea();

	UFUNCTION(BlueprintCallable)
	void PlayerEnterExitArea();

public:
	UPlayerIsInExitArea();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerIsInExitArea) { return 0; }
