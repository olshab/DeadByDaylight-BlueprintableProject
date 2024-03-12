#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "EDisplayStandMeatHookOverrideType.h"
#include "DisplayStandMeatHookOverride.generated.h"

class AMenuMeatHook;

USTRUCT(BlueprintType)
struct FDisplayStandMeatHookOverride: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OverrideId;

	UPROPERTY(EditAnywhere)
	EDisplayStandMeatHookOverrideType OverrideType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AMenuMeatHook> HookToUse;

public:
	DEADBYDAYLIGHT_API FDisplayStandMeatHookOverride();
};

FORCEINLINE uint32 GetTypeHash(const FDisplayStandMeatHookOverride) { return 0; }
