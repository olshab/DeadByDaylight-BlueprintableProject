#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OutlineReveal.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UOutlineReveal : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _affectedCharacters;

public:
	UOutlineReveal();
};

FORCEINLINE uint32 GetTypeHash(const UOutlineReveal) { return 0; }
