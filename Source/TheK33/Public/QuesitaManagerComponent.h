#pragma once

#include "CoreMinimal.h"
#include "MapSpecificGameStateComponent.h"
#include "Templates/SubclassOf.h"
#include "QuesitaManagerComponent.generated.h"

class ALocker;
class UQuesitaClosetHideEnterInteraction;
class UAkComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UQuesitaManagerComponent : public UMapSpecificGameStateComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UQuesitaClosetHideEnterInteraction> _quesitaLockerInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _globalJumpScareChanceIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _globalJumpScareChanceInitialValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _akQuesitaComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_QuesitaInteraction, Export, meta=(AllowPrivateAccess=true))
	UQuesitaClosetHideEnterInteraction* _interaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_QuesitaLocker, meta=(AllowPrivateAccess=true))
	ALocker* _locker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _shouldImplementQuesitaInteraction;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_QuesitaLocker(ALocker* lastLocker);

	UFUNCTION(BlueprintCallable)
	void OnRep_QuesitaInteraction();

	UFUNCTION(BlueprintCallable)
	void Authority_OnQuesitaInteractionDone();

	UFUNCTION(BlueprintCallable)
	void Authority_OnLockerInteractorChanged(bool isLocked);

protected:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UQuesitaManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UQuesitaManagerComponent) { return 0; }
