#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "FlickerSettings.generated.h"

USTRUCT(BlueprintType)
struct FFlickerSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle VisibleDuration;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> VisibileDurationAddModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle InvisibleDuration;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> InvisibleDurationAddModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StartVisible;

public:
	THEONRYO_API FFlickerSettings();
};

FORCEINLINE uint32 GetTypeHash(const FFlickerSettings) { return 0; }
