#pragma once

#include "CoreMinimal.h"
#include "EOnboardingTutorialType.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDTableRowBaseWithId.h"
#include "EOnboardingTutorialButtonStyle.h"
#include "OnboardingTutorialDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOnboardingTutorialDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CompletedDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CompletedDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOnboardingTutorialType TutorialType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOnboardingTutorialButtonStyle ButtonStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LevelId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultCharacterId;

public:
	ONBOARDING_API FOnboardingTutorialDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FOnboardingTutorialDefinition) { return 0; }
