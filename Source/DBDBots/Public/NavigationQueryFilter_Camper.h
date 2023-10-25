#pragma once

#include "CoreMinimal.h"
#include "NavigationQueryFilter_Player.h"
#include "NavigationQueryFilter_Camper.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UNavigationQueryFilter_Camper : public UNavigationQueryFilter_Player
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SlasherAreaBoundsLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SlasherAreaPenetrationCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SlasherInSightCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SlasherAreaExcludeUnderRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SlasherAreaUnwalkableRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SlasherInExcludeAreaCost;

public:
	UNavigationQueryFilter_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationQueryFilter_Camper) { return 0; }
