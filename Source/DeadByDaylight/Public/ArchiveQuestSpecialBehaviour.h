#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "EAdditiveBehaviour.h"
#include "EContextualType.h"
#include "EOwnershipBehaviour.h"
#include "EStackingBehaviours.h"
#include "SpecialBehaviourSpawnableComponent.h"
#include "ArchiveQuestSpecialBehaviour.generated.h"

USTRUCT(BlueprintType)
struct FArchiveQuestSpecialBehaviour: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EContextualType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SpawnObjectId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAdditiveBehaviour AdditiveBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStackingBehaviours StackableBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOwnershipBehaviour OwnershipBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnQuantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialBehaviourSpawnableComponent> SpawnableComponents;

public:
	DEADBYDAYLIGHT_API FArchiveQuestSpecialBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveQuestSpecialBehaviour) { return 0; }
