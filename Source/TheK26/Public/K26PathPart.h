#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K26PathPart.generated.h"

class USceneComponent;
class UK26PowerOutlineUpdateStrategy;
class UStaticMeshComponent;
class UDBDOutlineComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class AK26PathPart : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UStaticMeshComponent* _mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UNiagaraComponent* _visualEffectKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UNiagaraComponent* _visualEffectSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isVisibleForSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isVisibleForKiller;

public:
	AK26PathPart();
};

FORCEINLINE uint32 GetTypeHash(const AK26PathPart) { return 0; }
