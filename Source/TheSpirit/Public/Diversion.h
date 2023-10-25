#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "Diversion.generated.h"

class UThrowRockInteraction;
class UInteractionAttacherComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THESPIRIT_API UDiversion : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _diversionActivationTimePerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _throwPebbleDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UThrowRockInteraction> _throwPebbleInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionAttacherComponent* _interactionAttacherComponent;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UDiversion();
};

FORCEINLINE uint32 GetTypeHash(const UDiversion) { return 0; }
