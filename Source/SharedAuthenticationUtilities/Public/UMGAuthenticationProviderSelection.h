#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESharedAuthenticationProvider.h"
#include "UMGAuthenticationProviderSelection.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class SHAREDAUTHENTICATIONUTILITIES_API UUMGAuthenticationProviderSelection : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAsia;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateWidgetsVisibility();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowMigrationFailedPopup();

	UFUNCTION(BlueprintCallable)
	void SetSelectedAuthenticationProvider(ESharedAuthenticationProvider provider);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetMigrateWarningMessageAndShowPopup(const FString& playerName);

public:
	UUMGAuthenticationProviderSelection();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAuthenticationProviderSelection) { return 0; }
