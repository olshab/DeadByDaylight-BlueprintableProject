#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K34Dodson.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UAnimationMontageSlave;

UCLASS(Blueprintable)
class AK34Dodson : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USkeletalMeshComponent* _skeletalMesh;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAnimationMontageSlave* _animationMontageSlave;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnExitDodson();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEnterDodson();

public:
	AK34Dodson();
};

FORCEINLINE uint32 GetTypeHash(const AK34Dodson) { return 0; }
