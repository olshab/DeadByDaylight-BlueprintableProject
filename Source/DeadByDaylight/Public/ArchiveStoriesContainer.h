#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchiveStoriesContainer.generated.h"

class UWalletHandler;
class URewardTrackContainer;
class UArchiveVignettesContainer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UArchiveStoriesContainer : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	URewardTrackContainer* _rewardTrackcontainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UWalletHandler* _wallet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveVignettesContainer* _vignettesContainer;

public:
	UArchiveStoriesContainer();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveStoriesContainer) { return 0; }
