#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LobbyControllerSubsystem.generated.h"

class ULobbyDisplayStandController;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ULobbyControllerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ULobbyDisplayStandController> _localPlayerDisplayStandController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<FString, ULobbyDisplayStandController*> _displayStandControllers;

public:
	ULobbyControllerSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const ULobbyControllerSubsystem) { return 0; }
