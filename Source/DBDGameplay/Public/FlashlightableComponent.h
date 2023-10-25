#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlashlightableComponent.generated.h"

class UFlashlightableLightingStrategy;
class UFlashlightComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlashlightLitChangedEvent, bool, isLit);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlashlightAddedRemovedEvent, const UFlashlightComponent*, flashlight);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFlashlightAddedRemovedEvent OnFlashlightAddedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFlashlightAddedRemovedEvent OnFlashlightRemovedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFlashlightLitChangedEvent OnFlashlightLitChangedEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFlashlightableLightingStrategy* _lightingStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UFlashlightComponent*> _flashlights;

public:
	UFUNCTION(BlueprintPure)
	bool IsLit() const;

public:
	UFlashlightableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightableComponent) { return 0; }
