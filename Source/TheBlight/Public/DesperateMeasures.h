#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "DesperateMeasures.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDesperateMeasures : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _healAndUnhookMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	int32 _nbInjuredHookedOrDyingSurvivors;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDesperateMeasures();
};

FORCEINLINE uint32 GetTypeHash(const UDesperateMeasures) { return 0; }
