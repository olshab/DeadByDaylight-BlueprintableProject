#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GreenGlyphComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGreenGlyphComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _revealAuraGlyphDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SetShouldOutlineBeActive, meta=(AllowPrivateAccess=true))
	bool _shouldOutlineBeActive;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SetShouldOutlineBeActive();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Cheat_ShowAuraGreenGlyphActive(bool enabled, bool bForceShowAura);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGreenGlyphComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGreenGlyphComponent) { return 0; }
