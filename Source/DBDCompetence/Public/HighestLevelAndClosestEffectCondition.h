#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "HighestLevelAndClosestEffectCondition.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _effectsLevel1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _effectsLevel2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _effectsLevel3;

public:
	UFUNCTION(BlueprintCallable)
	void SetCurrentEffectLevel(int32 level);

	UFUNCTION(BlueprintCallable)
	void InitEffectArrays(FName effectIDLevel1, FName effectIDLevel2, FName effectIDLevel3);

public:
	UHighestLevelAndClosestEffectCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHighestLevelAndClosestEffectCondition) { return 0; }
