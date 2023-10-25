#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "GameFramework/Actor.h"
#include "DBDCustomizationToolData.h"
#include "DBDCustomizationTool.generated.h"

class ABaseSky;

UCLASS(Blueprintable)
class ADBDCustomizationTool : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<ABaseSky> OverallLightingClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDCustomizationToolData CustomizationData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> _spawnedActors;

public:
	ADBDCustomizationTool();
};

FORCEINLINE uint32 GetTypeHash(const ADBDCustomizationTool) { return 0; }
