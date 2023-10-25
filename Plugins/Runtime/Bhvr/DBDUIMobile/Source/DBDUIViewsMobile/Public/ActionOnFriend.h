#pragma once

#include "CoreMinimal.h"
#include "AtlantaFriendUIData.h"
#include "EActionOnFriendType.h"
#include "ActionOnFriend.generated.h"

class UUMGBaseFriendListElement;

USTRUCT(BlueprintType)
struct FActionOnFriend
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EActionOnFriendType ActionToProceed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAtlantaFriendUIData AtlantaFriendDataToUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGBaseFriendListElement* ActionOwner;

public:
	DBDUIVIEWSMOBILE_API FActionOnFriend();
};

FORCEINLINE uint32 GetTypeHash(const FActionOnFriend) { return 0; }
