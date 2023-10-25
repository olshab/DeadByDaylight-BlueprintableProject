#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EPerkCategory.h"
#include "CharacterSlideData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSlideData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Overview;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Playstyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ImageFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<EPerkCategory> SurvivorPerkCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString KillerPowerIconPath;

public:
	DEADBYDAYLIGHT_API FCharacterSlideData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterSlideData) { return 0; }
