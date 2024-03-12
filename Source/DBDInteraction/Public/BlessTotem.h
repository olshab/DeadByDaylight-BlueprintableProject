#pragma once

#include "CoreMinimal.h"
#include "BaseTotemInteraction.h"
#include "DBDTunableRowHandle.h"
#include "BlessTotem.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBlessTotem : public UBaseTotemInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _blessHexTotemSpeedPenalty;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionStarted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionFinished();

public:
	UBlessTotem();
};

FORCEINLINE uint32 GetTypeHash(const UBlessTotem) { return 0; }
