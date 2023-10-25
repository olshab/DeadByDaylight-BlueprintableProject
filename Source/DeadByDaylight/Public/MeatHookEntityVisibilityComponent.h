#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MeatHookEntityVisibilityComponent.generated.h"

class AEntity;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UMeatHookEntityVisibilityComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AEntity* _entity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _entityReappearSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _entityDisappearSpeed;

public:
	UMeatHookEntityVisibilityComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMeatHookEntityVisibilityComponent) { return 0; }
