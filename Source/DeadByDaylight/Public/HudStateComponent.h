#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HudStateComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHudStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsHudVisible, Transient, meta=(AllowPrivateAccess=true))
	bool _isHudVisible;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsHudVisible(const bool oldValue);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHudStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHudStateComponent) { return 0; }
