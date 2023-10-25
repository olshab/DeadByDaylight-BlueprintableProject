#pragma once

#include "CoreMinimal.h"
#include "OnCharmAnimationTagsChanged.h"
#include "OnAttachedOnActor.h"
#include "GameFramework/Actor.h"
#include "CharmAttacherAnimationTweak.h"
#include "CharmAttacher.generated.h"

class ACharm;
class UDBDSkeletalMeshComponentBudgeted;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ACharmAttacher : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAttachedOnActor OnAttachedOnActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCharmAnimationTagsChanged OnCharmAnimationTagsChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _chain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACharm* _attachedCharm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _charmAttachSocketName;

public:
	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetSkeletalMeshComponentAttachedOn();

	UFUNCTION(BlueprintPure)
	ACharm* GetAttachedCharm();

	UFUNCTION(BlueprintPure)
	FCharmAttacherAnimationTweak GetAnimationTweak();

	UFUNCTION(BlueprintPure)
	AActor* GetActorAttachedOn();

private:
	UFUNCTION(BlueprintCallable)
	void DispatchOnCharmAnimationTagsChanged();

	UFUNCTION(BlueprintCallable)
	void BindOnCharmAnimationTagsChanged();

public:
	ACharmAttacher();
};

FORCEINLINE uint32 GetTypeHash(const ACharmAttacher) { return 0; }
