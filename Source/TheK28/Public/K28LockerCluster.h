#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K28LockerCluster.generated.h"

class UK28LockerComponent;

USTRUCT(BlueprintType)
struct FK28LockerCluster
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UK28LockerComponent*> _lockersInCluster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _centerLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _teleportIndicatorLocation;

public:
	THEK28_API FK28LockerCluster();
};

FORCEINLINE uint32 GetTypeHash(const FK28LockerCluster) { return 0; }
