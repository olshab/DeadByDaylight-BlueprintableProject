#pragma once

#include "CoreMinimal.h"
#include "UMGFriendBaseTabListWidget.h"
#include "UMGFriendListTabWidget.generated.h"

class UUMGExpandableListWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGFriendListTabWidget : public UUMGFriendBaseTabListWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGExpandableListWidget* SentInviteToParty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGExpandableListWidget* ConnectedFriendsExpandableList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGExpandableListWidget* DisconnectedFriendsExpandableList;

public:
	UUMGFriendListTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendListTabWidget) { return 0; }
