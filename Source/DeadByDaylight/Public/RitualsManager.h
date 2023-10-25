#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DailyRitualContainer.h"
#include "DailyRitualInstance.h"
#include "CoreRitualsContent.h"
#include "RitualsManager.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API URitualsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDailyRitualContainer _cachedRitualContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDailyRitualInstance _cachedDismissalReplacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDailyRitualInstance _cachedClaimedReplacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FCoreRitualsContent _s3Content;

public:
	URitualsManager();
};

FORCEINLINE uint32 GetTypeHash(const URitualsManager) { return 0; }
