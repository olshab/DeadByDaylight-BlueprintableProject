#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTableRowBase.h"
#include "PlatformDlcData.generated.h"

USTRUCT(BlueprintType)
struct FPlatformDlcData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UnlockDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UISortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftObjectPath BannerImage;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HeritageID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcIdSteam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcIdEpic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcIdPS4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcId_XB1_XSX_GDK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcIdSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcIdGRDK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcIdPS5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcIdStadia;

public:
	DEADBYDAYLIGHT_API FPlatformDlcData();
};

FORCEINLINE uint32 GetTypeHash(const FPlatformDlcData) { return 0; }
