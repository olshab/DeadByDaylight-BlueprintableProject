#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "CharmAttacherAnimationTweak.h"
#include "CharmSlot.generated.h"

class ACharmAttacher;

USTRUCT(BlueprintType)
struct FCharmSlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<ACharmAttacher> CharmAttacherClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharmAttacherAnimationTweak DefaultAnimationTweak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FCharmAttacherAnimationTweak> AnimationTweakByTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACharmAttacher* CharmAttacherSpawned;

public:
	DEADBYDAYLIGHT_API FCharmSlot();
};

FORCEINLINE uint32 GetTypeHash(const FCharmSlot) { return 0; }
