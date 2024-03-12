#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EActionOnFriendType.h"
#include "UMGBaseFriendListContextualMenuWidget.generated.h"

class UUMGFriendButtonWidget;
class UAkAudioEvent;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseFriendListContextualMenuWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* InviteToPartyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* MuteButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* UnmuteButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* RemoveFriendButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* RemovePlayerFromPartyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* TransitionOutAnimationSound;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleActionTriggered(EActionOnFriendType actionType);

public:
	UUMGBaseFriendListContextualMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseFriendListContextualMenuWidget) { return 0; }
