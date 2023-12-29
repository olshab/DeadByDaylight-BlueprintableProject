#pragma once

#include "CoreMinimal.h"
#include "CustomTransformation.h"
#include "UObject/SoftObjectPtr.h"
#include "Templates/SubclassOf.h"
#include "ItemUIData.generated.h"

class UTexture2D;
class UUserWidget;

USTRUCT(BlueprintType)
struct FItemUIData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> IconFilePathList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSoftObjectPtr<UTexture2D>> IconAssetList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString SecondaryIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> animationWidgetRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AnimationLinkageId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCustomTransformation CustomTransformation;

	UPROPERTY(EditAnywhere)
	uint32 PlatformsUnlicensedNameOverride;

	UPROPERTY(EditAnywhere)
	uint32 PlatformsUnlicensedDescriptionOverride;

	UPROPERTY(EditAnywhere)
	uint32 PlatformsForIconUnlicensedFilePathListOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> IconUnlicensedFilePathListOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool LicenseExpirationOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FText DisplayNameUnlicensedOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FText DescriptionUnlicensedOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 AssociatedCharacterIndex;

public:
	DEADBYDAYLIGHT_API FItemUIData();
};

FORCEINLINE uint32 GetTypeHash(const FItemUIData) { return 0; }
