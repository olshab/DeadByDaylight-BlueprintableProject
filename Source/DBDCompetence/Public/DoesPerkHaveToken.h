#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "DoesPerkHaveToken.generated.h"

class UPerk;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDoesPerkHaveToken : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_Perk, Transient, Export)
	TWeakObjectPtr<UPerk> _perk;

public:
	UFUNCTION(BlueprintCallable)
	void SetPerk(UPerk* perk);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Perk();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDoesPerkHaveToken();
};

FORCEINLINE uint32 GetTypeHash(const UDoesPerkHaveToken) { return 0; }
