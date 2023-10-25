#pragma once

#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "SkillCheckResponse.generated.h"

class UChargeableInteractionDefinition;

USTRUCT(BlueprintType)
struct FSkillCheckResponse
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float ChargeChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsTriggeredByInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSuccessful;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInsane;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsTriggeringLoudNoise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool FailedCountedAsGood;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESkillCheckCustomType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UChargeableInteractionDefinition* Interaction;

	UPROPERTY(EditAnywhere, Transient)
	uint32 VerificationKey;

public:
	DEADBYDAYLIGHT_API FSkillCheckResponse();
};

FORCEINLINE uint32 GetTypeHash(const FSkillCheckResponse) { return 0; }
