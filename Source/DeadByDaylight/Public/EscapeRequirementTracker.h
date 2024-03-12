#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "EscapeRequirementTracker.generated.h"

class AGenerator;
class ADBDGameState;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UEscapeRequirementTracker : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _escapeGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDGameState* _dbdGameState;

private:
	UFUNCTION()
	void OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UEscapeRequirementTracker();
};

FORCEINLINE uint32 GetTypeHash(const UEscapeRequirementTracker) { return 0; }
