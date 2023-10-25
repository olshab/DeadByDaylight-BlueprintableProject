#pragma once

#include "CoreMinimal.h"
#include "UMGBaseFriendListElement.h"
#include "UMGReceivedFriendRequestListElement.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGReceivedFriendRequestListElement : public UUMGBaseFriendListElement
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	URichTextBlock* FriendRequestStatusRichText;

public:
	UUMGReceivedFriendRequestListElement();
};

FORCEINLINE uint32 GetTypeHash(const UUMGReceivedFriendRequestListElement) { return 0; }
