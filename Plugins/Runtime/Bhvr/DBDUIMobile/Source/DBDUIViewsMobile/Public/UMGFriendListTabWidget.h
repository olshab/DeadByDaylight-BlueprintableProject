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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGExpandableListWidget* SentInviteToParty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGExpandableListWidget* ConnectedFriendsExpandableList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGExpandableListWidget* DisconnectedFriendsExpandableList;

public:
	UUMGFriendListTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendListTabWidget) { return 0; }
