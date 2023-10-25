#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavModifierComponent.h"
#include "DBDNavModifierComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDNavModifierComponent : public UNavModifierComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ForceUseFailsafeExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateModifierInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StartNavigationRelevant;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AlwaysTickToCheckTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RelevantPassiveMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BoundCenterOffset;

public:
	UDBDNavModifierComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDNavModifierComponent) { return 0; }
