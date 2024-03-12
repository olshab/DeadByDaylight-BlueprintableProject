#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EGameTypeModifierName.h"
#include "TypeFlexibleTunable.h"
#include "GameTypeModifierDefaults.generated.h"

UCLASS(Blueprintable)
class UGameTypeModifierDefaults : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EGameTypeModifierName, FTypeFlexibleTunable> Modifiers;

public:
	UGameTypeModifierDefaults();
};

FORCEINLINE uint32 GetTypeHash(const UGameTypeModifierDefaults) { return 0; }
