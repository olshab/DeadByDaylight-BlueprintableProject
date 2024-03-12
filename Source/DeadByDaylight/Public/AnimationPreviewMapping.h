#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAnimationPreviewType.h"
#include "AnimationPreviewMappingSurvivorCustomization.h"
#include "AnimationPreviewMapping.generated.h"

USTRUCT(BlueprintType)
struct FAnimationPreviewMapping: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MappingId;

	UPROPERTY(EditAnywhere)
	EAnimationPreviewType AnimationType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName WhenKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName UseSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationPreviewMappingSurvivorCustomization UseSurvivorCustomization;

public:
	DEADBYDAYLIGHT_API FAnimationPreviewMapping();
};

FORCEINLINE uint32 GetTypeHash(const FAnimationPreviewMapping) { return 0; }
