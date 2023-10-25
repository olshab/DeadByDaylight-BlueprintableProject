#pragma once

#include "CoreMinimal.h"
#include "AnimationDependency.h"
#include "SleepableSkeletalMesh.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "DBDSkeletalMeshComponentBudgeted.generated.h"

class USkeletalMeshComponent;
class UAnimBudgeterSignificanceStrategy;
class USignificanceStrategy;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDANIMATIONBUDGETALLOCATOR_API UDBDSkeletalMeshComponentBudgeted : public USkeletalMeshComponentBudgeted, public IAnimationDependency, public ISleepableSkeletalMesh
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _autoRegisterToAnimBudgeter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _autoComputeSignificance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USignificanceStrategy* _significanceStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAnimBudgeterSignificanceStrategy* _animBudgeterSignificanceStrategy;

public:
	UFUNCTION(BlueprintCallable)
	void SetAnimationDependency(USkeletalMeshComponent* meshDependency);

public:
	UDBDSkeletalMeshComponentBudgeted();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSkeletalMeshComponentBudgeted) { return 0; }
