#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIBackendDataAccessor.generated.h"

class USplinteredStatesSubsystem;

UCLASS(Blueprintable)
class UIBACKENDDATA_API UUIBackendDataAccessor : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USplinteredStatesSubsystem* _splinteredStateSubsystem;

public:
	UUIBackendDataAccessor();
};

FORCEINLINE uint32 GetTypeHash(const UUIBackendDataAccessor) { return 0; }
