#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "S33P02.generated.h"

class UInteractionAttacherComponent;
class US33P02Interaction;
class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US33P02 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _distanceRadius;

private:
	UPROPERTY(EditAnywhere)
	float _struggleProgressionPausedDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _S33P02StatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ReassuredSurvivors, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _reassuredSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<US33P02Interaction> _S33P02Interaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionAttacherComponent* _interactionAttacherComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ReassuredSurvivors();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Local_EffectTriggered(const FTransform location);

public:
	UFUNCTION(BlueprintPure)
	float GetStruggleProgressionAtLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US33P02();
};

FORCEINLINE uint32 GetTypeHash(const US33P02) { return 0; }
