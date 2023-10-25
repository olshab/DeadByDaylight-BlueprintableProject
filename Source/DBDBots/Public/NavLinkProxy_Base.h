#pragma once

#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "MoveLinkPlayerInfo.h"
#include "NavLinkProxy_Base.generated.h"

class AActor;
class ADBDPlayer;

UCLASS(Blueprintable, Abstract)
class DBDBOTS_API ANavLinkProxy_Base : public ANavLinkProxy
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaitLinkOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveOnEndPointTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NbMaxLinkUsers;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, FMoveLinkPlayerInfo> _players;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _linkUsedByPlayers;

private:
	UFUNCTION(BlueprintCallable)
	void OnSmartLinkReachedCallback(AActor* MovingActor, const FVector& DestinationPoint);

public:
	UFUNCTION(BlueprintCallable)
	void AutoAdjustSmartLinkPoints();

public:
	ANavLinkProxy_Base();
};

FORCEINLINE uint32 GetTypeHash(const ANavLinkProxy_Base) { return 0; }
