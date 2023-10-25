#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EInventoryType.h"
#include "Templates/SubclassOf.h"
#include "CharacterInventoryComponent.generated.h"

class ACollectable;
class UItemAddon;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _tagsPreventingItemVisibility;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Inventory, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACollectable*> _inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_GeneralAddons, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UItemAddon*> _generalAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BackpackInventory, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACollectable*> _backpackInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACollectable*> _localInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACollectable*> _localBackpackInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UItemAddon*> _allAddons;

public:
	UFUNCTION(BlueprintCallable)
	void StoreItem();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	ACollectable* SpawnAndCollectItem(FName itemID);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Inventory();

	UFUNCTION(BlueprintCallable)
	void OnRep_GeneralAddons();

	UFUNCTION(BlueprintCallable)
	void OnRep_BackpackInventory();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RemoveFromInventory(ACollectable* item, EInventoryType inventoryType);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_MoveItemToOtherSlot(ACollectable* itemBeingMoved, EInventoryType targetInventoryType);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ClearAndDestroyInventory();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AddToInventory(ACollectable* item, EInventoryType inventoryType);

public:
	UFUNCTION(BlueprintPure)
	bool IsUsingAimItem() const;

	UFUNCTION(BlueprintPure)
	bool HasStoredItem() const;

	UFUNCTION(BlueprintPure)
	bool HasMaximumItemCount(const ACollectable* item) const;

	UFUNCTION(BlueprintPure)
	bool HasItem(EInventoryType inventoryType) const;

	UFUNCTION(BlueprintPure)
	bool HasInInventory(TSubclassOf<ACollectable> item, EInventoryType inventoryType);

	UFUNCTION(BlueprintPure)
	bool HasEquippedItem() const;

	UFUNCTION(BlueprintPure)
	FName GetItemID(EInventoryType inventoryType) const;

	UFUNCTION(BlueprintPure)
	int32 GetItemCountByID(FName itemID) const;

	UFUNCTION(BlueprintPure)
	int32 GetItemCount() const;

	UFUNCTION(BlueprintPure)
	ACollectable* GetItem(EInventoryType inventoryType) const;

	UFUNCTION(BlueprintPure)
	ACollectable* GetFirstItemFromInventory(TSubclassOf<ACollectable> item, EInventoryType inventoryType);

	UFUNCTION(BlueprintCallable)
	TArray<UItemAddon*> GetAddons();

	UFUNCTION(BlueprintCallable)
	UItemAddon* GetAddon(FName addonId);

	UFUNCTION(BlueprintCallable)
	void EquipItem();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_UseInventoryItem();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveFromInventory(ACollectable* item, EInventoryType inventoryType);

	UFUNCTION(BlueprintCallable)
	void Authority_Collect(ACollectable* item, EInventoryType inventoryType);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ClearAndDestroyInventory();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddToInventory(ACollectable* item, EInventoryType inventoryType);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCharacterInventoryComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterInventoryComponent) { return 0; }
