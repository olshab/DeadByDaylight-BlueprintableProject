#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "AITunableParameter.h"
#include "EInLockerPerkEmptyHandType.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "InLockerPerk.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FInLockerPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown PerkID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PerkNeedToBeFullyCharged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInLockerPerkEmptyHandType RequiredHeldItemSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInLockerPerkEmptyHandType RequiredEmptyHandedSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool NeedToBeInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool NeedPerkSkillToBeRunnableAtLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MustBeFarFromLinkedObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumDistanceFromObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> LinkedObjectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UnusableIfLockerPenaltyReceived;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBLockerPenaltyReceived;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnusableUnlessKillerIsFartherThan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PerkWeight;

public:
	DBDBOTS_API FInLockerPerk();
};

FORCEINLINE uint32 GetTypeHash(const FInLockerPerk) { return 0; }
