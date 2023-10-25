#pragma once

#include "CoreMinimal.h"
#include "PathStrategy_Flee.h"
#include "PathStrategy_FleeLure.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UPathStrategy_FleeLure : public UPathStrategy_Flee
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumRangeToLureableDangerObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxActiveTimeSecondsEndgame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> LostFocusInteractionIds;

public:
	UPathStrategy_FleeLure();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategy_FleeLure) { return 0; }
