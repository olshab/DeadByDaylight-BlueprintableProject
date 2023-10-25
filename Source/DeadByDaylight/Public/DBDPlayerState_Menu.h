#pragma once

#include "CoreMinimal.h"
#include "DBDPlayerState.h"
#include "EPlayerRole.h"
#include "EquippedPlayerCustomization.h"
#include "ELoadoutSlot.h"
#include "DBDPlayerState_Menu.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDPlayerState_Menu : public ADBDPlayerState
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetSelectedCharacterId(int32 id, bool updateDisplayData);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetSelectedCharacterCustomization(EPlayerRole forRole, int32 id, const FEquippedPlayerCustomization customization);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetEquipmentAddons(const TArray<FName>& addonItemIds, bool callOnRep);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetEquipment(ELoadoutSlot slot, FName itemId, bool callOnRep);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_NotifyOnRep();

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetSelectedCharacterId(EPlayerRole forRole, int32 id, bool updateDisplayData);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetSelectedCharacterCustomization(EPlayerRole forRole, int32 id, const FEquippedPlayerCustomization customization);

public:
	ADBDPlayerState_Menu();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerState_Menu) { return 0; }
