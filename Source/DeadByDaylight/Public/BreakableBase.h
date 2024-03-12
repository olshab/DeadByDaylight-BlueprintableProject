#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "UObject/NoExportTypes.h"
#include "EBreakableState.h"
#include "BreakableBase.generated.h"

class USceneComponent;
class UAkComponent;
class ADBDPlayer;
class UBoxComponent;
class UAkAudioEvent;

UCLASS(Blueprintable, Abstract)
class DEADBYDAYLIGHT_API ABreakableBase : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UBoxComponent* _breakableCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EBreakableState _state;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _akAudioBreakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _akAudioBreakEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _rootComponent;

public:
	UFUNCTION(BlueprintCallable)
	void PlayAudioBreakable();

	UFUNCTION(BlueprintPure)
	bool IsUnbroken() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ExplodeVfxSfx(const FVector impulseDir);

public:
	UFUNCTION(BlueprintCallable)
	void Explode(ADBDPlayer* player);

public:
	ABreakableBase();
};

FORCEINLINE uint32 GetTypeHash(const ABreakableBase) { return 0; }
