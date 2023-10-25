#pragma once

#include "CoreMinimal.h"
#include "ObjectFastArray.h"
#include "Perk.h"
#include "Engine/EngineTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "DetectivesHunch.generated.h"

class AInteractable;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDetectivesHunch : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<TSoftClassPtr<AInteractable>> _interactableClasses;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _revealRanges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _revealDuration;

	UPROPERTY(EditAnywhere, Transient)
	TMap<AActor*, FTimerHandle> _actorToTimerMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FObjectFastArray _revealedActors;

public:
	UFUNCTION(BlueprintPure)
	float GetRevealRangeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetRevealDuration() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDetectivesHunch();
};

FORCEINLINE uint32 GetTypeHash(const UDetectivesHunch) { return 0; }
