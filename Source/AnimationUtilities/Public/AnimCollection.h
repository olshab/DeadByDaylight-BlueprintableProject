#pragma once

#include "CoreMinimal.h"
#include "AnimSequenceSelector.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AnimCollection.generated.h"

class UBlendSpaceBase;
class UAnimSequence;
class UAnimCollection;

UCLASS(Blueprintable)
class ANIMATIONUTILITIES_API UAnimCollection : public UDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag, UAnimSequence*> _taggedAnimSequences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag, UBlendSpaceBase*> _taggedAnimBlendspaces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag, FAnimSequenceSelector> _taggedAnimSelectors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimCollection* _parent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimCollection*> _children;

public:
	UAnimCollection();
};

FORCEINLINE uint32 GetTypeHash(const UAnimCollection) { return 0; }
