#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomTransformation.h"
#include "StoreItemViewData.h"
#include "CustomizationRewardViewData.h"
#include "EPlayerRole.h"
#include "StoreCustomizationItemViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCustomizationItemViewData : public UStoreItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCustomizationRewardViewData CustomizationReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName MirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayCollectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RoleCategoryInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RarityPartInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> ParentBundleIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> ChildrenItemIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCustomTransformation CustomTransformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsVisceral;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole AssociatedRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime ReleaseDate;

public:
	UStoreCustomizationItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCustomizationItemViewData) { return 0; }
