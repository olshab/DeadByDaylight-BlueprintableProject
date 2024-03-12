#pragma once

#include "CoreMinimal.h"
#include "UMGFriendBaseTabListWidget.h"
#include "UMGRequestsListTabWidget.generated.h"

class UUMGExpandableListWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGRequestsListTabWidget : public UUMGFriendBaseTabListWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGExpandableListWidget* FriendRequestExpandableList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGExpandableListWidget* PendingExpandableList;

public:
	UUMGRequestsListTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRequestsListTabWidget) { return 0; }
