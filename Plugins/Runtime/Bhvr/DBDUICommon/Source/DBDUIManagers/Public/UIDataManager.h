#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "UObject/SoftObjectPtr.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Styling/SlateTypes.h"
#include "EItemRarity.h"
#include "EProgressionType.h"
#include "CurrencyProgressionUIData.h"
#include "RarityMaterialData.h"
#include "ArchiveTomeSkinData.h"
#include "EArchiveMenuState.h"
#include "UIDataManager.generated.h"

class UTexture2D;
class UMaterialInterface;

UCLASS(Blueprintable)
class DBDUIMANAGERS_API UUIDataManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<EItemRarity, FRarityMaterialData> RarityMaterialMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FString, FTextBlockStyle> RichTextStyleMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<ECurrencyType, FCurrencyProgressionUIData> CurrencyUIDataMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<EProgressionType, FCurrencyProgressionUIData> ProgressionUIDataMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<EArchiveMenuState, FArchiveTomeSkinData> ArchiveTomeSkinDataMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FString, UTexture2D*> TooltipEventSkinUIDataMap;

public:
	UFUNCTION(BlueprintPure)
	UMaterialInterface* GetTooltipRarityMaterial(EItemRarity rarity) const;

	UFUNCTION(BlueprintPure)
	UTexture2D* GetTooltipEventHeader(const FString& eventBannerLabel) const;

	UFUNCTION(BlueprintPure)
	UMaterialInterface* GetLoadoutPartRarityMaterial(EItemRarity rarity) const;

	UFUNCTION(BlueprintPure)
	UMaterialInterface* GetCustomizationRarityMaterial(EItemRarity rarity) const;

	UFUNCTION(BlueprintPure)
	TSoftObjectPtr<UTexture2D> GetCurrencyIcon(const ECurrencyType currencyType) const;

public:
	UUIDataManager();
};

FORCEINLINE uint32 GetTypeHash(const UUIDataManager) { return 0; }
