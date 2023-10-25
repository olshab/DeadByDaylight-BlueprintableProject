#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "OnryoAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UOnryoAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTeleporting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isStartingUpTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _teleportStartUpDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCrawlingOutOfTV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _crawlingOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTeleportCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _teleportCancelledDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isEnteringManifest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isExitingManifest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInOtherWorld;

public:
	UOnryoAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoAnimInstance) { return 0; }
