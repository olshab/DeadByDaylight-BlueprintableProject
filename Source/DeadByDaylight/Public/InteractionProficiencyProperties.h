#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "InteractionProficiencyProperties.generated.h"

class UInteractionProficiency;

USTRUCT(BlueprintType)
struct FInteractionProficiencyProperties: public FDBDTableRowBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProficiencyID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UInteractionProficiency> ProficiencyBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> BuffLevelThresholds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> DebuffLevelThresholds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasLevels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconFilePath;

public:
	DEADBYDAYLIGHT_API FInteractionProficiencyProperties();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionProficiencyProperties) { return 0; }
