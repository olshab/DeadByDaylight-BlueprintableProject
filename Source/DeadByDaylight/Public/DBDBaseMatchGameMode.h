#pragma once

#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDBaseMatchGameMode.generated.h"

class UEscapeRequirementTracker;
class UEndGameComponent;
class ANetworkFenceActor;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API ADBDBaseMatchGameMode : public ADBDBaseGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UEndGameComponent* _endGameComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UEscapeRequirementTracker* _escapeRequirementTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ANetworkFenceActor* _theFence;

public:
	UFUNCTION(BlueprintPure)
	UEndGameComponent* GetEndGameComponent() const;

public:
	ADBDBaseMatchGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDBaseMatchGameMode) { return 0; }
