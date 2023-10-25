#pragma once

#include "CoreMinimal.h"
#include "GunslingerHarpoon.h"
#include "GameFramework/Actor.h"
#include "HarpoonProp.generated.h"

class UDBDSkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class THEGUNSLINGER_API AHarpoonProp : public AActor, public IGunslingerHarpoon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

public:
	AHarpoonProp();
};

FORCEINLINE uint32 GetTypeHash(const AHarpoonProp) { return 0; }
