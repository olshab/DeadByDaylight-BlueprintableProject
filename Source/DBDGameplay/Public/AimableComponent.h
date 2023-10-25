#pragma once

#include "CoreMinimal.h"
#include "AimableInterface.h"
#include "Components/ActorComponent.h"
#include "AimableComponent.generated.h"

class UAimPointProcessor;
class AActor;
class UAimDirectionProvider;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UAimableComponent : public UActorComponent, public IAimableInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<AActor*> _occlusionIgnoredActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxAimDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAimDirectionProvider* _aimDirectionProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useOcclusion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimPointLerpFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UAimPointProcessor*> _preOcclusionAimPointProcessors;

public:
	UFUNCTION(BlueprintCallable)
	void SetProcessors(TArray<UAimPointProcessor*> processors);

	UFUNCTION(BlueprintCallable)
	void SetOcclusionIgnoredActors(const TArray<AActor*>& ignoredActors);

	UFUNCTION(BlueprintCallable)
	void SetMaxAimDistance(float maxAimDistance);

public:
	UAimableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAimableComponent) { return 0; }
