#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "BlightedSerumAddon.generated.h"

class ACollectable;
class UBlightedSerumDashInteraction;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ACollectable> _blightedSerumCollectable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DashInteraction, Transient, Export, meta=(AllowPrivateAccess=true))
	UBlightedSerumDashInteraction* _dashInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _theBlightExtraTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _numberOfDashesPerEvent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_DashInteraction();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnBlightedDashEnabledVfxSfx();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBlightedSerumAddon();
};

FORCEINLINE uint32 GetTypeHash(const UBlightedSerumAddon) { return 0; }
