#include "AtlantaUtilities.h"
#include "Styling/SlateBrush.h"
#include "EPlayerRole.h"
#include "EEmblemQuality.h"
#include "EAIDifficultyLevel.h"
#include "ECurrencyType.h"
#include "EOfferingCategory.h"
#include "Styling/SlateColor.h"
#include "EItemRarity.h"
#include "EItemAvailability.h"
#include "EInputInteractionType.h"

class UTexture2D;
class AActor;
class UImage;
class UButton;
class UPaperSprite;
class ADBDPlayer;
class UInteractionDefinition;

bool UAtlantaUtilities::SetImageSlateBrush(UImage* image, const FSlateBrush& brush, bool bMatchSize)
{
	return false;
}

void UAtlantaUtilities::SetImageBrushFromSpritePath(UImage* image, const FString& path)
{

}

void UAtlantaUtilities::SetImageBrushFromPath(UImage* image, const FString& path, bool bMatchSize)
{

}

void UAtlantaUtilities::SetImageBrush(UImage* image, UTexture2D* asset, bool bMatchSize)
{

}

void UAtlantaUtilities::SetButtonStyle(UButton* button, const FSlateBrush& brush)
{

}

FString UAtlantaUtilities::SecondsToStringWithoutDecimals(const int32 seconds)
{
	return TEXT("");
}

FSlateBrush UAtlantaUtilities::MakeBrushFromTexture(UTexture2D* texture)
{
	return FSlateBrush{};
}

FSlateBrush UAtlantaUtilities::MakeBrushFromSprite(UPaperSprite* sprite)
{
	return FSlateBrush{};
}

UTexture2D* UAtlantaUtilities::LoadTextureByAsset(const FString& path)
{
	return NULL;
}

bool UAtlantaUtilities::IsPlayerInteractingWithActor(ADBDPlayer* player, const AActor* actor)
{
	return false;
}

FString UAtlantaUtilities::GetStoreVersion()
{
	return TEXT("");
}

UPaperSprite* UAtlantaUtilities::GetSpriteFromPath(const FString& fullDbPathToImage, const FString& constantDbPathToImageFolder, const FString& constantPathToSpriteFolder)
{
	return NULL;
}

UPaperSprite* UAtlantaUtilities::GetSpriteFromFullPath(const FString& fullSpritePath)
{
	return NULL;
}

FText UAtlantaUtilities::GetPlayerRoleTextUppercase(const EPlayerRole playerRole)
{
	return FText::GetEmpty();
}

FText UAtlantaUtilities::GetPlayerRoleText(const EPlayerRole playerRole)
{
	return FText::GetEmpty();
}

FText UAtlantaUtilities::GetOfferingCategoryText(const EOfferingCategory offeringCategory)
{
	return FText::GetEmpty();
}

UPaperSprite* UAtlantaUtilities::GetMapSpriteFromPath(const FString& mapSpritePath)
{
	return NULL;
}

FText UAtlantaUtilities::GetItemRarityText(const EItemRarity rarity)
{
	return FText::GetEmpty();
}

FText UAtlantaUtilities::GetItemAvailabilityText(const EItemAvailability availability)
{
	return FText::GetEmpty();
}

UTexture2D* UAtlantaUtilities::GetIconImageByPath(const FString& iconPath)
{
	return NULL;
}

FText UAtlantaUtilities::GetEmblemQualityText(const EEmblemQuality emblemQuality)
{
	return FText::GetEmpty();
}

FText UAtlantaUtilities::GetDifficultyLevelText(const EAIDifficultyLevel difficultyLevel)
{
	return FText::GetEmpty();
}

UInteractionDefinition* UAtlantaUtilities::GetCurrentOrAvailableInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType)
{
	return NULL;
}

UInteractionDefinition* UAtlantaUtilities::GetCurrentInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType)
{
	return NULL;
}

UInteractionDefinition* UAtlantaUtilities::GetCurrentInteraction(ADBDPlayer* player)
{
	return NULL;
}

FString UAtlantaUtilities::GetCurrencyUITexturePath(ECurrencyType currencyType)
{
	return TEXT("");
}

FSlateColor UAtlantaUtilities::GetCurrencyColor(ECurrencyType currencyType)
{
	return FSlateColor{};
}

UInteractionDefinition* UAtlantaUtilities::GetAvailableInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType)
{
	return NULL;
}

FText UAtlantaUtilities::GetAlantaInteractionDescriptionText(UInteractionDefinition* interaction)
{
	return FText::GetEmpty();
}

UAtlantaUtilities::UAtlantaUtilities()
{

}
