#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BTService_OnRelevantBase.h"
#include "BTService_SetTagCooldown.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_SetTagCooldown : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag CooldownTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddToExistingDuration;

public:
	UBTService_SetTagCooldown();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_SetTagCooldown) { return 0; }
