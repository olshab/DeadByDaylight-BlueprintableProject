#pragma once

#include "CoreMinimal.h"
#include "CustomizationItemData.h"
#include "DBDCustomizationToolData.generated.h"

class USkeletalMesh;
class UTexture2D;
class UAnimationAsset;

USTRUCT(BlueprintType)
struct FDBDCustomizationToolData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomizationItemData Head;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomizationItemData Torso;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomizationItemData Leg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomizationItemData Bodies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RoleName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh* BaseSkeleton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* MaskTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimationAsset* AnimationToPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StrHeadDLC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StrTorsoDLC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StrLegDLC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StrBodiesDLC;

public:
	DEADBYDAYLIGHT_API FDBDCustomizationToolData();
};

FORCEINLINE uint32 GetTypeHash(const FDBDCustomizationToolData) { return 0; }
