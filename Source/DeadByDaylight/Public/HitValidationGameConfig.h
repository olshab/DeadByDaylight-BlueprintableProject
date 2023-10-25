#pragma once

#include "CoreMinimal.h"
#include "HitValidationRecorder.h"
#include "HitValidationValidator.h"
#include "HitValidationGameConfig.generated.h"

USTRUCT(BlueprintType)
struct FHitValidationGameConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableCollisionCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHitValidationRecorder Recorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FHitValidationValidator> Validators;

public:
	DEADBYDAYLIGHT_API FHitValidationGameConfig();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidationGameConfig) { return 0; }
