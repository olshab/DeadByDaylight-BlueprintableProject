#pragma once

#include "CoreMinimal.h"
#include "AIDisplayDebugInterface.h"
#include "UObject/NoExportTypes.h"
#include "EAITerrorLevel.h"
#include "PathBuilder.generated.h"

class UNavMovePath;
class ADBDAIBTController;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDBOTS_API UPathBuilder : public UObject, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PathReachedPointRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAITerrorLevel ToleratedTerrorPressure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OverridePreviousPathStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumValidPathTimeWhenPathReached;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UNavMovePath* _path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDAIBTController* _aiOwner;

public:
	UPathBuilder();
};

FORCEINLINE uint32 GetTypeHash(const UPathBuilder) { return 0; }
