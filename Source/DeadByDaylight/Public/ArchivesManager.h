#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ArchivesManager.generated.h"

class UArchiveStoriesContainer;
class UArchiveVignettesContainer;
class URewardTrackContainer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UArchivesManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveStoriesContainer* _storiesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveVignettesContainer* _vignettesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	URewardTrackContainer* _rewardTrackContainer;

public:
	UArchivesManager();
};

FORCEINLINE uint32 GetTypeHash(const UArchivesManager) { return 0; }
