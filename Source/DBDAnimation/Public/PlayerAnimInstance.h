#pragma once

#include "CoreMinimal.h"
#include "Activatable.h"
#include "DBDBaseAnimInstance.h"
#include "TaggedAnimCollection.h"
#include "AnimSequenceSelector.h"
#include "GameplayTagContainer.h"
#include "ActivationDefinition.h"
#include "PlayerAnimInstance.generated.h"

class UAimOffsetBlendSpace1D;
class UAnimSequence;
class UBlendSpace;
class ADBDPlayer;
class UAimOffsetBlendSpace;
class UBlendSpace1D;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UPlayerAnimInstance : public UDBDBaseAnimInstance, public IActivatable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* _owningPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTaggedAnimCollection> _taggedAnimCollections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FGameplayTag, UAnimSequence*> _animations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FGameplayTag, UBlendSpace*> _blendspaces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FGameplayTag, UAimOffsetBlendSpace*> _aimoffsets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FGameplayTag, UBlendSpace1D*> _blendspaces1d;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FGameplayTag, UAimOffsetBlendSpace1D*> _aimoffsets1d;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FGameplayTag, FAnimSequenceSelector> _selectors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInParadise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIntroCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isLevelReadyToPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActivationDefinition _activationDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _interactionDuration;

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetOwningPlayer() const;

public:
	UPlayerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerAnimInstance) { return 0; }
