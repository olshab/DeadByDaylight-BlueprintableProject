#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "InboxMessageUIData.h"
#include "InboxScreen.generated.h"

class UUMGInboxScreen;

UCLASS(Blueprintable)
class UInboxScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGInboxScreen* _umgScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FInboxMessageUIData> _newsMessages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FInboxMessageUIData> _rewardsMessages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FInboxMessageUIData> _socialMessages;

public:
	UInboxScreen();
};

FORCEINLINE uint32 GetTypeHash(const UInboxScreen) { return 0; }
