#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "EAIEvadeLoopSides.h"
#include "Engine/EngineTypes.h"
#include "DBDNavEvadeLoopComponent.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDNavEvadeLoopComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EvadeDoorExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EvadeDoorFrontPointOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EvadeDoorSideOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SideBlockerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoSnapPointsUpHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoSnapPointsDownHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> AutoSnapCollisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UNavigationQueryFilter> EvadeLoopFilterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinSafetyLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSafetyLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAIEvadeLoopSides LimitToSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DebugEditMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DrawDebugFilter;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UDBDNavEvadeLoopComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDNavEvadeLoopComponent) { return 0; }
