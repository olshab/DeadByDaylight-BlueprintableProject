#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AssetViewDataLoadingStateChanged.h"
#include "BhvrAssetViewData.generated.h"

UCLASS(Blueprintable, Abstract, Transient)
class BHVRASSETVIEWER_API UBhvrAssetViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAssetViewDataLoadingStateChanged LoadingStateChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsLoading;

public:
	UFUNCTION(BlueprintPure)
	bool IsLoading() const;

	UFUNCTION(BlueprintPure)
	FString GetId() const;

	UFUNCTION(BlueprintPure)
	FString GetDisplayName() const;

public:
	UBhvrAssetViewData();
};

FORCEINLINE uint32 GetTypeHash(const UBhvrAssetViewData) { return 0; }
