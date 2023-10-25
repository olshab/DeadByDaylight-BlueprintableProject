#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InboxMessageData.h"
#include "OnlineMessagesContainerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ONLINEMESSAGESUTILITIES_API UOnlineMessagesContainerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FInboxMessageData> _messages;

public:
	UOnlineMessagesContainerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnlineMessagesContainerComponent) { return 0; }
