#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CustomizationItemData.h"
#include "CharacterToolSpawnParameters.h"
#include "CharacterToolItemData.h"
#include "CharacterDescription.h"
#include "EScreenshotToolState.h"
#include "ScreenshotToolHook.generated.h"

class ADBDMenuPlayer;
class ACharm;

UINTERFACE(Blueprintable)
class DEADBYDAYLIGHT_API UScreenshotToolHook : public UInterface
{
	GENERATED_BODY()
};

class DEADBYDAYLIGHT_API IScreenshotToolHook : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ScreenshotBeginPlay(bool isPIE);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreTakeItemScreenshot(const FCharacterToolItemData& item);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreSpawnCharm(const FCustomizationItemData& item);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreSpawnCharacter(const FCharacterDescription& description, FCharacterToolSpawnParameters& spawnParams);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreHookDestruction();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreDestroyCharm(ACharm* charm);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreDestroyCharacter(ADBDMenuPlayer* character);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreBatchItems();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PostUpdateCharacter(ADBDMenuPlayer* character);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PostTakeItemScreenshot(const FCharacterToolItemData& item, bool success);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PostStateChanged(EScreenshotToolState previousState, EScreenshotToolState currentState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PostSpawnCharm(ACharm* charm);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PostSpawnCharacter(ADBDMenuPlayer* character);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PostHookConstruction();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PostBatchItems(const TArray<FCharacterToolItemData>& items);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsPIEOnly() const;

};
