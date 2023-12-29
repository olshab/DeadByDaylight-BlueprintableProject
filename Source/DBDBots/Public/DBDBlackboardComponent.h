#pragma once

#include "CoreMinimal.h"
#include "AIDisplayDebugInterface.h"
#include "MindFocusObjectEntry.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "WeightedWishedObjectMapContainer.h"
#include "DBDBlackboardComponent.generated.h"

class UAISkill;
class UObject;
class APallet;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDBlackboardComponent : public UBlackboardComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UObject*, FMindFocusObjectEntry> _mindFocusEntries;

	UPROPERTY(EditAnywhere, Transient)
	TMap<FGameplayTag, FVector> _pinLocations;

	UPROPERTY(EditAnywhere, Transient)
	TMap<FGameplayTag, UObject*> _pinObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UObject*, float> _lostMindFocusEntries;

	UPROPERTY(EditAnywhere, Transient)
	TMap<FGameplayTag, FWeightedWishedObjectMapContainer> _objectWishListMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<UObject*> _discoveredObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<UObject*> _intentionValidators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<APallet*> _convincingDreamPallets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UAISkill*> _dropItemLocks;

public:
	UDBDBlackboardComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBlackboardComponent) { return 0; }
