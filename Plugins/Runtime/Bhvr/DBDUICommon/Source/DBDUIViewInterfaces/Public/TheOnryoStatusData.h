#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "TheOnryoStatusData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UTheOnryoStatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCondemnedActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CondemnedProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LockedProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFullCondemned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHoldingTape;

public:
	UTheOnryoStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UTheOnryoStatusData) { return 0; }
