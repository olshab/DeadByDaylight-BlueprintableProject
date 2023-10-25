#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "GeneratorAnimInstance.generated.h"

class AGenerator;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UGeneratorAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AGenerator* _owningGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _rushFailed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _percentComplete;

public:
	UFUNCTION(BlueprintCallable)
	void SetSkillCheckSuccess(bool success);

public:
	UGeneratorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorAnimInstance) { return 0; }
