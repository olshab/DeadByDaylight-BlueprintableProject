#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InvitationTargetComponent.h"
#include "DBDTunableRowHandle.h"
#include "InvitationSurvivorTargetComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationSurvivorTargetComponent : public UInvitationTargetComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _vaultBlockerDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _fragilePalletDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _masqueradeRevealStatusEffect;

public:
	UInvitationSurvivorTargetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationSurvivorTargetComponent) { return 0; }
