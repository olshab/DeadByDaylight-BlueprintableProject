#pragma once

#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "Components/ActorComponent.h"
#include "DistanceBasedTickDisabler.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SIGNIFICANCEUTILITIES_API UDistanceBasedTickDisabler : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _autoRegisterOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _autoRegisterTimelines;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _tickDisableDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _insignificantWhenBehindTheCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UActorComponent*> _components;

public:
	UFUNCTION(BlueprintCallable)
	void UnregisterComponent(UActorComponent* component);

	UFUNCTION(BlueprintCallable)
	void RegisterComponent(UActorComponent* component);

public:
	UDistanceBasedTickDisabler();
};

FORCEINLINE uint32 GetTypeHash(const UDistanceBasedTickDisabler) { return 0; }
