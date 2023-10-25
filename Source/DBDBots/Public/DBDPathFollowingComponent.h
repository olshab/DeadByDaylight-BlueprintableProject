#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "DBDPathFollowingComponent.generated.h"

class ANavLinkProxy;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDPathFollowingComponent : public UPathFollowingComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnblockPathDeviationRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnblockPathTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnblockPathReachDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ANavLinkProxy*> _onNavLinkProxies;

public:
	UDBDPathFollowingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPathFollowingComponent) { return 0; }
