#pragma once

#include "CoreMinimal.h"
#include "EDoctorAbilityType.h"
#include "Components/ActorComponent.h"
#include "EDoctorAbilityPhase.h"
#include "DoctorPowerAnimStateComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDoctorPowerAnimStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDoctorAbilityType _abilityType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDoctorAbilityPhase _abilityPhase;

public:
	UFUNCTION(BlueprintCallable)
	void SetCurrentAbilityType(EDoctorAbilityType abilityType);

	UFUNCTION(BlueprintCallable)
	void SetCurrentAbilityPhase(EDoctorAbilityPhase abilityPhase);

public:
	UDoctorPowerAnimStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDoctorPowerAnimStateComponent) { return 0; }
