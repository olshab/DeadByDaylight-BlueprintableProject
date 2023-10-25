#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "InfectiousFright.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UInfectiousFright : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _revealPlayerInTerrorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PerkActivationCount, Transient, meta=(AllowPrivateAccess=true))
	uint8 _perkActivationCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _revealedSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _targetSurvivor;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RevealSurvivorLocation(ACamperPlayer* target);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_PerkActivationCount();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInfectiousFright();
};

FORCEINLINE uint32 GetTypeHash(const UInfectiousFright) { return 0; }
