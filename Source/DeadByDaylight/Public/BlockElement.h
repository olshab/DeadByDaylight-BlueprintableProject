#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlockElement.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UBlockElement : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UObject> _source;

	UPROPERTY(EditAnywhere, Transient)
	TSet<TWeakObjectPtr<ADBDPlayer>> _affectedPlayers;

public:
	UBlockElement();
};

FORCEINLINE uint32 GetTypeHash(const UBlockElement) { return 0; }
