#pragma once

#include "CoreMinimal.h"
#include "EKillerAbilities.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "EPawnType.h"
#include "BTService_Find_Character.generated.h"

class ADBDAIBTController;

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_Find_Character : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPawnType CharacterFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerAbilities KillerAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBCharacterLocation;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDAIBTController* _aiOwner;

public:
	UBTService_Find_Character();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_Find_Character) { return 0; }
