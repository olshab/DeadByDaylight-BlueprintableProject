#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "K35StatusData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UK35StatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAfflictedWithKillerEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsRemovingKillerEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KillerEffectRemovalProgress;

public:
	UK35StatusData();
};

FORCEINLINE uint32 GetTypeHash(const UK35StatusData) { return 0; }
