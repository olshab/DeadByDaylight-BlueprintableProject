#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "UObject/NoExportTypes.h"
#include "K33ExitTunnelInteractable.generated.h"

class USceneComponent;
class UInteractor;
class AK33ControlStation;
class UBoxComponent;

UCLASS(Blueprintable)
class THEK33_API AK33ExitTunnelInteractable : public AInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _interactionCollisionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_LinkedControlStation, Transient, meta=(AllowPrivateAccess=true))
	AK33ControlStation* _linkedControlStation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TargetLocation, Transient, meta=(AllowPrivateAccess=true))
	FVector _targetLocation;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TargetLocation();

	UFUNCTION(BlueprintCallable)
	void OnRep_LinkedControlStation();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK33ExitTunnelInteractable();
};

FORCEINLINE uint32 GetTypeHash(const AK33ExitTunnelInteractable) { return 0; }
