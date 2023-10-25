#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "InvitationTargetComponent.generated.h"

class AActor;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationTargetComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _interactionAngleInDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _revealColor;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TargetGameObject, meta=(AllowPrivateAccess=true))
	AActor* _targetGameObject;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TargetGameObject(AActor* previousTarget);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTargetObjectChanged(AActor* target, AActor* lastTarget);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInvitationTargetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationTargetComponent) { return 0; }
