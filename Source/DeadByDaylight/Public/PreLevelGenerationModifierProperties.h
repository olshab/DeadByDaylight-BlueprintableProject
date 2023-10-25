#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EKillerAbilities.h"
#include "EPreLevelGenerationModifierType.h"
#include "PreLevelGenerationModifierProperties.generated.h"

USTRUCT(BlueprintType)
struct FPreLevelGenerationModifierProperties: public FDBDTableRowBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ModifierID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPreLevelGenerationModifierType ModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerAbilities KillerAbiliy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ModifierValue;

public:
	DEADBYDAYLIGHT_API FPreLevelGenerationModifierProperties();
};

FORCEINLINE uint32 GetTypeHash(const FPreLevelGenerationModifierProperties) { return 0; }
