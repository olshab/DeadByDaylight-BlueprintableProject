#pragma once

#include "CoreMinimal.h"
#include "AIPathValidatorInterface.h"
#include "AIDisplayDebugInterface.h"
#include "UObject/NoExportTypes.h"
#include "PathStrategy.generated.h"

class ADBDAIBTController;
class UPathBuilder;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UPathStrategy : public UObject, public IAIDisplayDebugInterface, public IAIPathValidatorInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UPathBuilder*> DefaultPathBuilders;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RefreshPartialPathDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartNextBranchBuildDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxActiveTimeSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StrategyEndCooldownSeconds;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDAIBTController* _aiOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UPathBuilder*> _pathBuilders;

public:
	UPathStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategy) { return 0; }
