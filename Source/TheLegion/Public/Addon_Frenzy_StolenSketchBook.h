#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_Frenzy_StolenSketchBook.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THELEGION_API UAddon_Frenzy_StolenSketchBook : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _dropItemAfterChainedHitNumber;

public:
	UAddon_Frenzy_StolenSketchBook();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Frenzy_StolenSketchBook) { return 0; }
