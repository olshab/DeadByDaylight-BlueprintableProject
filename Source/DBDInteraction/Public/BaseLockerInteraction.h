#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "BaseLockerInteraction.generated.h"

class ALocker;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UBaseLockerInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ALocker* _owningLocker;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _lockerPreventingTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _lockerIsMontageFollower;

protected:
	UFUNCTION(BlueprintPure)
	ALocker* GetLocker() const;

public:
	UBaseLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBaseLockerInteraction) { return 0; }
