#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalletPulldownBlockerComponent.generated.h"

class UObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPalletPulldownBlockerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _isPalletPulldownBlockedByEntity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PalletToBlock, Transient, meta=(AllowPrivateAccess=true))
	UObject* _palletToBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _blockedDisappearFxTime;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_PalletToBlock(UObject* oldPalletToBlock);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_PalletPulldownBlockedShowCosmetic(UObject* palletToBlock);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_PalletPulldownBlockedHideCosmetic(UObject* palletToUnblock);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPalletPulldownBlockerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPalletPulldownBlockerComponent) { return 0; }
