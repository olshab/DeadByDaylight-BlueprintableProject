#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PrimitivesRegistererComponent.generated.h"

class UPrimitiveCollection;
class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class PHYSICSUTILITIES_API UPrimitivesRegistererComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UPrimitiveComponent*> _primitives;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UPrimitiveCollection> _primitiveCollection;

public:
	UFUNCTION(BlueprintCallable)
	void SetPrimitives(const TArray<UPrimitiveComponent*>& primitives);

public:
	UPrimitivesRegistererComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPrimitivesRegistererComponent) { return 0; }
