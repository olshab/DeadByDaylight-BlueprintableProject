#pragma once

#include "CoreMinimal.h"
#include "SlashableInterface.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "CamperSlashableComponent.generated.h"

class USlashableActivationSourceCollection;
class UCapsuleComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperSlashableComponent : public UActorComponent, public ISlashableInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* _slashableZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* _hookSlashableZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _standingCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _crouchCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _slashableDisablingStateTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _sourceActivationLingerDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USlashableActivationSourceCollection* _slashableActivationSources;

public:
	UFUNCTION(BlueprintCallable)
	void SetUseCrouchSlashableCapsule(bool useCrouchCapsule);

	UFUNCTION(BlueprintCallable)
	void SetStandingCapsuleHalfHeight(float height);

	UFUNCTION(BlueprintCallable)
	void SetSlashableZone(UCapsuleComponent* zone);

	UFUNCTION(BlueprintCallable)
	void SetHookSlashableZone(UCapsuleComponent* zone);

	UFUNCTION(BlueprintCallable)
	void SetCrouchCapsuleHalfHeight(float height);

public:
	UCamperSlashableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperSlashableComponent) { return 0; }
