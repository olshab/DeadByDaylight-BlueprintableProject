#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "UMGAtlantaEventsScreen.generated.h"

class UTextBlock;
class UUMGAtlantaEventsDescription;
class UWrapBox;
class UUMGAtlantaEventsTab;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaEventsScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PageTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWrapBox* WrapBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAtlantaEventsDescription* DescriptionWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUMGAtlantaEventsTab> EventsTabWBPReference;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGAtlantaEventsTab*> _eventsArray;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleEventTabClicked(const FString& id);

	UFUNCTION(BlueprintCallable)
	void BroadcastOnCloseButtonClicked();

private:
	UFUNCTION(BlueprintCallable)
	void BroadcastDeepLinkRequest(const FString& id);

public:
	UUMGAtlantaEventsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaEventsScreen) { return 0; }
