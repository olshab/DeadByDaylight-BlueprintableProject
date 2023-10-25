#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Leader.generated.h"

class ULeaderEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULeader : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _actionSpeedModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ULeaderEffect> _leaderStatusEffect;

public:
	ULeader();
};

FORCEINLINE uint32 GetTypeHash(const ULeader) { return 0; }
