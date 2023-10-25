#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlashlightTargetFXComponent.generated.h"

class UFlashlightableComponent;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightTargetFXComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _modifiesBeamAngle;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFlashlightableComponent* _flashlightable;

private:
	UFUNCTION(BlueprintCallable)
	void OnIsLitChanged(bool isLit);

public:
	UFlashlightTargetFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightTargetFXComponent) { return 0; }
