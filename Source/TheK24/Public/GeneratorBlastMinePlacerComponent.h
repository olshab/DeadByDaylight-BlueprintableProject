#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GeneratorBlastMinePlacerComponent.generated.h"

class ABlastMineFirecracker;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGeneratorBlastMinePlacerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _mineRelativeHeightFromGenerator;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BlastMine, Transient, meta=(AllowPrivateAccess=true))
	ABlastMineFirecracker* _blastMine;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_BlastMine();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGeneratorBlastMinePlacerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorBlastMinePlacerComponent) { return 0; }
