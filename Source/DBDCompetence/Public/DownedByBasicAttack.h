#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "DownedByBasicAttack.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDownedByBasicAttack : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ReplicatedIsTrue, meta=(AllowPrivateAccess=true))
	bool _replicatedIsTrue;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedIsTrue();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDownedByBasicAttack();
};

FORCEINLINE uint32 GetTypeHash(const UDownedByBasicAttack) { return 0; }
