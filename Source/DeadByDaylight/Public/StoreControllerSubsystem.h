#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StoreControllerSubsystem.generated.h"

class UStoreDisplayStandController;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UStoreControllerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreDisplayStandController* _displayStandController;

public:
	UStoreControllerSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UStoreControllerSubsystem) { return 0; }
