#pragma once

#include "CoreMinimal.h"
#include "ENearGameObjectQuestObjectType.h"
#include "GameplayTagContainer.h"
#include "GameObjectQuery.generated.h"

USTRUCT(BlueprintType)
struct FGameObjectQuery
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ENearGameObjectQuestObjectType Type;

	UPROPERTY(EditAnywhere)
	FGameplayTagQuery GameplayTagQuery;

public:
	ARCHIVES_API FGameObjectQuery();
};

FORCEINLINE uint32 GetTypeHash(const FGameObjectQuery) { return 0; }
