#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AssetViewDataSourceLoadingStateChanged.h"
#include "BhvrAssetViewOption.h"
#include "AssetViewDataSourceSelectionStateChanged.h"
#include "BhvrAssetViewDataSource.generated.h"

class UBhvrAssetViewData;

UCLASS(Blueprintable, Abstract, Transient)
class BHVRASSETVIEWER_API UBhvrAssetViewDataSource : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAssetViewDataSourceLoadingStateChanged LoadingStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAssetViewDataSourceSelectionStateChanged AssetViewDataSelectionStateChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FBhvrAssetViewOption> AssetViewDataOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FString, UBhvrAssetViewData*> AssetViewDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsLoading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UBhvrAssetViewData* SelectedAssetViewData;

public:
	UFUNCTION(BlueprintCallable)
	void SelectAssetViewData(const FString& AssetViewDataId);

	UFUNCTION(BlueprintPure)
	bool IsLoading() const;

	UFUNCTION(BlueprintPure)
	UBhvrAssetViewData* GetSelectedAssetViewData();

	UFUNCTION(BlueprintPure)
	FString GetId() const;

	UFUNCTION(BlueprintPure)
	FString GetDisplayName() const;

public:
	UBhvrAssetViewDataSource();
};

FORCEINLINE uint32 GetTypeHash(const UBhvrAssetViewDataSource) { return 0; }
