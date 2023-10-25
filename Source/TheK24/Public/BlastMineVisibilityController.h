#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlastMineVisibilityController.generated.h"

class UFXSystemComponent;
class UMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK24_API UBlastMineVisibilityController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UFXSystemComponent*> _systems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UMeshComponent*> _meshes;

public:
	UFUNCTION(BlueprintPure)
	bool IsVisible() const;

	UFUNCTION(BlueprintCallable)
	void AddMeshComponent(UMeshComponent* meshComponent);

	UFUNCTION(BlueprintCallable)
	void AddFXSystem(UFXSystemComponent* system);

public:
	UBlastMineVisibilityController();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineVisibilityController) { return 0; }
