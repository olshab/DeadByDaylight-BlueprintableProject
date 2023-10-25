#pragma once

#include "CoreMinimal.h"
#include "GuardSlowingZone.h"
#include "GuardPalletSlowingZone.generated.h"

class APallet;

UCLASS(Blueprintable)
class THEK30_API AGuardPalletSlowingZone : public AGuardSlowingZone
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_LinkedPallet, meta=(AllowPrivateAccess=true))
	APallet* _linkedPallet;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_LinkedPallet();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AGuardPalletSlowingZone();
};

FORCEINLINE uint32 GetTypeHash(const AGuardPalletSlowingZone) { return 0; }
