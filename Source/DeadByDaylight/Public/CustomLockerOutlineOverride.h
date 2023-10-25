#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "CustomLockerOutlineOverride.generated.h"

USTRUCT(BlueprintType)
struct FCustomLockerOutlineOverride
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> LockerStateTags;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> PlayerStateTags;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> PlayerPerkFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor OutlineColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAlwaysVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FadeOutAsClosingIn;

public:
	DEADBYDAYLIGHT_API FCustomLockerOutlineOverride();
};

FORCEINLINE uint32 GetTypeHash(const FCustomLockerOutlineOverride) { return 0; }
