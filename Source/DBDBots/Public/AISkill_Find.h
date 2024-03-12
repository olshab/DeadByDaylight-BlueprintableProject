#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "AISkill_Find.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Find : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> FindClass;

	UPROPERTY(EditAnywhere)
	FGameplayTag BlackboardWishListTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SearchInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MustBeSeen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfWasInCooldownAndFocusedOnAnotherObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreMindFocusCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AbandonIfInChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfInPressureZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfNotFocusedBySelf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfInteractableFocusedByOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsesActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ActorLocationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalBasicWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightAtMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SearchHeightAmplifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SearchHeightAmplifierActivationHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUnsafeAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UnsafeInteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UnsafeActionUsesItemAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UnsafeActionIsSelfInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnsafeActionRange;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UObject*> _currentWishedObjects;

public:
	UAISkill_Find();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Find) { return 0; }
