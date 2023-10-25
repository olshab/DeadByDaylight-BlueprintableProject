#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "DBDTunableRowHandle.h"
#include "BaseTwinInspectLocker.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBaseTwinInspectLocker : public UBaseLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _inspectInteractionTime;

public:
	UBaseTwinInspectLocker();
};

FORCEINLINE uint32 GetTypeHash(const UBaseTwinInspectLocker) { return 0; }
