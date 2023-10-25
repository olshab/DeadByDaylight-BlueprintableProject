#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CloakComponent.generated.h"

class UBasicChargeableInteraction;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEWRAITH_API UCloakComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsCloaked, Transient, meta=(AllowPrivateAccess=true))
	bool _isCloaked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBasicChargeableInteraction* _cloakInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBasicChargeableInteraction* _uncloakInteraction;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsCloaked();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCloakComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCloakComponent) { return 0; }
