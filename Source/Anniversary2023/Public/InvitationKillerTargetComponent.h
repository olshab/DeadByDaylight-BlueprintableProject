#pragma once

#include "CoreMinimal.h"
#include "InvitationTargetComponent.h"
#include "DBDTunableRowHandle.h"
#include "InvitationKillerTargetComponent.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationKillerTargetComponent : public UInvitationTargetComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _bloodlustExposeDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _remoteDestroyDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _negateStunDistance;

public:
	UInvitationKillerTargetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationKillerTargetComponent) { return 0; }
