#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StoreRecommendationSubsystem.generated.h"

class URemoteContentCacheSubsystem;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UStoreRecommendationSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	URemoteContentCacheSubsystem* _remoteContentCacheSubsystem;

public:
	UStoreRecommendationSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UStoreRecommendationSubsystem) { return 0; }
