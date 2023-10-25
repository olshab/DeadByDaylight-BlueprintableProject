#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "CoreMemoryChallengePlayerSpecificController.generated.h"

class UCoreMemoryController;
class UCoreMemoryFragmentComponent;
class ADBDPlayer;

UCLASS(Blueprintable)
class ACoreMemoryChallengePlayerSpecificController : public AInfo
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _owningPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Controller, Transient, Export, meta=(AllowPrivateAccess=true))
	UCoreMemoryController* _controller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Fragments, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreMemoryFragmentComponent*> _fragments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _numFragmentsToCollect;

public:
	UFUNCTION(BlueprintCallable)
	void StartQuest();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Fragments();

	UFUNCTION(BlueprintCallable)
	void OnRep_Controller();

	UFUNCTION(BlueprintCallable)
	void OnPortalReplicated();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ACoreMemoryChallengePlayerSpecificController();
};

FORCEINLINE uint32 GetTypeHash(const ACoreMemoryChallengePlayerSpecificController) { return 0; }
