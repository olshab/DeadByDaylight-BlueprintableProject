#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SlaveAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class ANIMATIONUTILITIES_API USlaveAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Transient, meta=(BindWidget))
	TWeakObjectPtr<USkeletalMeshComponent> _masterMesh;

public:
	UFUNCTION(BlueprintCallable)
	void SetMasterMesh(USkeletalMeshComponent* masterMesh);

	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetMasterMesh() const;

public:
	USlaveAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USlaveAnimInstance) { return 0; }
