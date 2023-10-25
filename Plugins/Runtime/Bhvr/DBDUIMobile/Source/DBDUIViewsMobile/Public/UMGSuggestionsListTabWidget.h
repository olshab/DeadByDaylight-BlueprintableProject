#pragma once

#include "CoreMinimal.h"
#include "UMGFriendBaseTabListWidget.h"
#include "UMGSuggestionsListTabWidget.generated.h"

class UUMGExpandableListWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGSuggestionsListTabWidget : public UUMGFriendBaseTabListWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGExpandableListWidget* PlayedWithFriendsExpandableList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGExpandableListWidget* SocialFriendsExpandableList;

public:
	UUMGSuggestionsListTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSuggestionsListTabWidget) { return 0; }
