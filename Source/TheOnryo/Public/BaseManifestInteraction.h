#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "BaseManifestInteraction.generated.h"

class ADBDPlayer;
class UManifestationComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBaseManifestInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UManifestationComponent* _manifestationComponent;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionSucceeded(ADBDPlayer* onryo);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionStarted(ADBDPlayer* onryo);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCancelled(ADBDPlayer* onryo);

public:
	UBaseManifestInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBaseManifestInteraction) { return 0; }
