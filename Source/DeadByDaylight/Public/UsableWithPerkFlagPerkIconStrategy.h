#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "GameplayTagContainer.h"
#include "UsableWithPerkFlagPerkIconStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UUsableWithPerkFlagPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _perkTagsOnPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _playerShouldHaveTags;

public:
	UUsableWithPerkFlagPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UUsableWithPerkFlagPerkIconStrategy) { return 0; }
