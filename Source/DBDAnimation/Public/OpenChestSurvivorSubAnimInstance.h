#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "OpenChestSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UOpenChestSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInteractingWithChest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FGameplayTag _interactionPhase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInteractingWithOpenChest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector _snapPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isVomiting;

public:
	UOpenChestSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UOpenChestSurvivorSubAnimInstance) { return 0; }
