#pragma once

#include "CoreMinimal.h"
#include "EAIDifficultyLevel.h"
#include "ECurrencyType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateBrush.h"
#include "EPlayerRole.h"
#include "EOfferingCategory.h"
#include "Styling/SlateColor.h"
#include "EItemRarity.h"
#include "EItemAvailability.h"
#include "EEmblemQuality.h"
#include "EInputInteractionType.h"
#include "AtlantaUtilities.generated.h"

class UTexture2D;
class AActor;
class UImage;
class UButton;
class UPaperSprite;
class ADBDPlayer;
class UInteractionDefinition;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAtlantaUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static bool SetImageSlateBrush(UImage* image, const FSlateBrush& brush, bool bMatchSize);

	UFUNCTION(BlueprintCallable)
	static void SetImageBrushFromSpritePath(UImage* image, const FString& path);

	UFUNCTION(BlueprintCallable)
	static void SetImageBrushFromPath(UImage* image, const FString& path, bool bMatchSize);

	UFUNCTION(BlueprintCallable)
	static void SetImageBrush(UImage* image, UTexture2D* asset, bool bMatchSize);

	UFUNCTION(BlueprintCallable)
	static void SetButtonStyle(UButton* button, const FSlateBrush& brush);

	UFUNCTION(BlueprintPure)
	static FString SecondsToStringWithoutDecimals(const int32 seconds);

	UFUNCTION(BlueprintCallable)
	static FSlateBrush MakeBrushFromTexture(UTexture2D* texture);

	UFUNCTION(BlueprintCallable)
	static FSlateBrush MakeBrushFromSprite(UPaperSprite* sprite);

	UFUNCTION(BlueprintCallable)
	static UTexture2D* LoadTextureByAsset(const FString& path);

	UFUNCTION(BlueprintCallable)
	static bool IsPlayerInteractingWithActor(ADBDPlayer* player, const AActor* actor);

	UFUNCTION(BlueprintPure)
	static FString GetStoreVersion();

	UFUNCTION(BlueprintPure)
	static UPaperSprite* GetSpriteFromPath(const FString& fullDbPathToImage, const FString& constantDbPathToImageFolder, const FString& constantPathToSpriteFolder);

	UFUNCTION(BlueprintPure)
	static UPaperSprite* GetSpriteFromFullPath(const FString& fullSpritePath);

	UFUNCTION(BlueprintPure)
	static FText GetPlayerRoleTextUppercase(const EPlayerRole playerRole);

	UFUNCTION(BlueprintPure)
	static FText GetPlayerRoleText(const EPlayerRole playerRole);

	UFUNCTION(BlueprintPure)
	static FText GetOfferingCategoryText(const EOfferingCategory offeringCategory);

	UFUNCTION(BlueprintPure)
	static UPaperSprite* GetMapSpriteFromPath(const FString& mapSpritePath);

	UFUNCTION(BlueprintPure)
	static FText GetItemRarityText(const EItemRarity rarity);

	UFUNCTION(BlueprintPure)
	static FText GetItemAvailabilityText(const EItemAvailability availability);

	UFUNCTION(BlueprintPure)
	static UTexture2D* GetIconImageByPath(const FString& iconPath);

	UFUNCTION(BlueprintPure)
	static FText GetEmblemQualityText(const EEmblemQuality emblemQuality);

	UFUNCTION(BlueprintPure)
	static FText GetDifficultyLevelText(const EAIDifficultyLevel difficultyLevel);

	UFUNCTION(BlueprintPure)
	static UInteractionDefinition* GetCurrentOrAvailableInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType);

	UFUNCTION(BlueprintPure)
	static UInteractionDefinition* GetCurrentInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType);

	UFUNCTION(BlueprintPure)
	static UInteractionDefinition* GetCurrentInteraction(ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	static FString GetCurrencyUITexturePath(ECurrencyType currencyType);

	UFUNCTION(BlueprintPure)
	static FSlateColor GetCurrencyColor(ECurrencyType currencyType);

	UFUNCTION(BlueprintPure)
	static UInteractionDefinition* GetAvailableInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType);

	UFUNCTION(BlueprintCallable)
	static FText GetAlantaInteractionDescriptionText(UInteractionDefinition* interaction);

public:
	UAtlantaUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaUtilities) { return 0; }
