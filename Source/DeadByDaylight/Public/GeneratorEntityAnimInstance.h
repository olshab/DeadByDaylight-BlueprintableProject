#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GeneratorEntityAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API UGeneratorEntityAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCorrupted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCorrupted_End;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUncorrupted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUncorrupted_End;

public:
	UGeneratorEntityAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorEntityAnimInstance) { return 0; }
