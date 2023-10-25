#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationMontageDescriptor.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "TwinDestructionComponent.generated.h"

class AActor;
class AConjoinedTwin;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinDestructionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _huskClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FTransform _dyingTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _dyingFromSurvivorTranslation;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTwinQuickDestroy(AConjoinedTwin* owningTwin);

private:
	UFUNCTION(BlueprintCallable)
	void OnDyingMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinDestroyedFromSurvivorRemove(AConjoinedTwin* owningTwin);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinDestroyedFromKick(AConjoinedTwin* owningTwin);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnTwinQuickDestroyOver();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTwinDestructionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinDestructionComponent) { return 0; }
