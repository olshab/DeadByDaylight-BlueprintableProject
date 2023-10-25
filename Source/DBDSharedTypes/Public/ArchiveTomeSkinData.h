#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchiveTomeSkinData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FArchiveTomeSkinData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* ArchiveTitleBarSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* ArchiveSideNavSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* ArchiveSideNavSmokeSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* ArchiveTabsSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* ArchiveProgressPanelSmokeSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ArchiveSkinColor;

public:
	DBDSHAREDTYPES_API FArchiveTomeSkinData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveTomeSkinData) { return 0; }
