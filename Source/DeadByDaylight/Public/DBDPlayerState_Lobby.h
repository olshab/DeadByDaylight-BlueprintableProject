#pragma once

#include "CoreMinimal.h"
#include "DBDPlayerState_Menu.h"
#include "DBDPlayerState_Lobby.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDPlayerState_Lobby : public ADBDPlayerState_Menu
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	bool IsOwnershipValidated;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDPlayerState_Lobby();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerState_Lobby) { return 0; }
