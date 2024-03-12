#pragma once

#include "CoreMinimal.h"
#include "AssetViewerViewControllerSelectionStateChanged.h"
#include "GameFramework/Actor.h"
#include "AssetViewerLoadingStateChanged.h"
#include "Templates/SubclassOf.h"
#include "AssetViewerViewDataSourceSelectionStateChanged.h"
#include "BhvrAssetViewOption.h"
#include "BhvrAssetViewer.generated.h"

class UBhvrAssetViewDataSource;
class UBhvrAssetViewController;
class UBhvrAssetViewData;
class ATargetPoint;

UCLASS(Blueprintable)
class BHVRASSETVIEWER_API ABhvrAssetViewer : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAssetViewerLoadingStateChanged LoadingStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAssetViewerViewDataSourceSelectionStateChanged AssetViewDataSourceSelectionStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAssetViewerViewControllerSelectionStateChanged AssetViewControllerSelectionStateChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	TSubclassOf<UBhvrAssetViewDataSource> AssetViewDataSourceBaseClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	TSubclassOf<UBhvrAssetViewController> AssetViewControllerBaseClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ATargetPoint* AssetSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FBhvrAssetViewOption> AssetViewDataSourceOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FString, UBhvrAssetViewDataSource*> AssetViewDataSources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UBhvrAssetViewController*> AssetViewControllers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsLoading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UBhvrAssetViewDataSource* SelectedAssetViewDataSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UBhvrAssetViewController* SelectedAssetViewController;

public:
	UFUNCTION(BlueprintCallable)
	void SelectAssetViewDataSource(const FString& AssetViewDataSourceId);

private:
	UFUNCTION(BlueprintCallable)
	void OnSelectedAssetViewDataChanged(UBhvrAssetViewData* OldAssetViewData, UBhvrAssetViewData* NewAssetViewData);

public:
	UFUNCTION(BlueprintPure)
	bool IsLoading() const;

	UFUNCTION(BlueprintPure)
	UBhvrAssetViewDataSource* GetSelectedAssetViewDataSource() const;

	UFUNCTION(BlueprintPure)
	UBhvrAssetViewController* GetSelectedAssetViewController() const;

	UFUNCTION(BlueprintCallable)
	void BeginPlay();

public:
	ABhvrAssetViewer();
};

FORCEINLINE uint32 GetTypeHash(const ABhvrAssetViewer) { return 0; }
