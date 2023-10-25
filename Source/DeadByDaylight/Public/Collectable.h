#pragma once

#include "CoreMinimal.h"
#include "ECollectableCategory.h"
#include "GameplayTagContainer.h"
#include "ECollectableState.h"
#include "Interactable.h"
#include "UObject/NoExportTypes.h"
#include "EAtlantaItemProgressionBarEnum.h"
#include "EItemHandPosition.h"
#include "EInputInteractionType.h"
#include "ELoadoutItemType.h"
#include "EAttachToSocketNameEnum.h"
#include "EInventoryType.h"
#include "EItemDropType.h"
#include "Engine/EngineTypes.h"
#include "Collectable.generated.h"

class ACamperPlayer;
class UItemAddon;
class UInteractor;
class UItemModifier;
class ADBDPlayer;
class USceneComponent;
class UDBDSkeletalMeshComponentBudgeted;
class AActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ACollectable : public AInteractable
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCollectorSetBPDelegate, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectorSetBP, ADBDPlayer*, player);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DisplayUsePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAtlantaItemProgressionBarEnum ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OverrideItemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OverridenItemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StrafeOnUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool VisibleWhenEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopRunningOnUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemHandPosition HandPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DisableArmOverrideDuringInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasUseInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECollectableCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FromPlayerSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UItemModifier* BaseItemModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UItemModifier* ItemModifier1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UItemModifier* ItemModifier2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldRegisterToOnSurvivorAdded;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BeingCollected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BeingDropped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _beingConsumedByEntity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UInteractor* _itemInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDSkeletalMeshComponentBudgeted* _mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputInteractionType _displayedInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isKeyPromptForceDisabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBoundToFirstCollector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCursedItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSpecialItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useInventoryCount;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _placementOrigin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Collector, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _collector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _firstCollector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_State, Transient, meta=(AllowPrivateAccess=true))
	ECollectableState _state;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UItemAddon*> _itemAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UItemModifier*> _itemModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	int32 _itemCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EAttachToSocketNameEnum _attachToSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EInventoryType _collectInInventoryType;

	UPROPERTY(EditAnywhere)
	FGameplayTag _stateTagForCollector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ELoadoutItemType _itemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _discardOnDrop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _discardWhenConsumed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _disableAttachmentReplication;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isInUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _aimOnUse;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVisibilityEvent(bool visibility);

public:
	UFUNCTION(BlueprintCallable)
	void SetItemInteractor(UInteractor* interactor);

	UFUNCTION(BlueprintCallable)
	void SetIsKeyPromptForceDisabled(const bool isKeyPromptForceDisabled);

	UFUNCTION(BlueprintCallable)
	void SetDisplayedInputType(const EInputInteractionType displayedInputType);

	UFUNCTION(BlueprintCallable)
	void SetCount(int32 count);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnUseReleased(ADBDPlayer* collector);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnUse();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_State();

	UFUNCTION(BlueprintCallable)
	void OnRep_Collector(ADBDPlayer* oldCollector);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPostItemAddonsCreation(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnDropped(ADBDPlayer* droppingPlayer);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCustomizationChanged();

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnCollectorSet(ADBDPlayer* collector);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAddonsRemoved(const TArray<UItemAddon*>& addons);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAddonsAdded(const TArray<UItemAddon*>& addons);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnActivateDissolveItem();

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_UseReleased(ADBDPlayer* collector);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Use();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RemoveItemAddon(UItemAddon* addon);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RemoveAllAddons();

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Dropped(ADBDPlayer* droppedBy, const FVector& location, const FRotator& rotation, EItemDropType itemDropType);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Collected(ADBDPlayer* collector, EInventoryType inventoryType);

public:
	UFUNCTION(BlueprintCallable)
	void Local_Dropped_Location(ADBDPlayer* droppedBy, const FVector& location, const FRotator& rotation);

	UFUNCTION(BlueprintPure)
	bool IsStored() const;

	UFUNCTION(BlueprintPure)
	bool IsSpecialItem() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsRechargeable() const;

	UFUNCTION(BlueprintPure)
	bool IsPickable() const;

	UFUNCTION(BlueprintPure)
	bool IsOnGround() const;

	UFUNCTION(BlueprintPure)
	bool IsLocallyControlled() const;

	UFUNCTION(BlueprintCallable)
	bool IsKeyPromptForceDisabled() const;

	UFUNCTION(BlueprintPure)
	bool IsInSearchable() const;

	UFUNCTION(BlueprintPure)
	bool IsEquipped() const;

	UFUNCTION(BlueprintPure)
	bool IsCursedItem() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsCountDisplayForced() const;

	UFUNCTION(BlueprintPure)
	bool IsCollected() const;

	UFUNCTION(BlueprintPure)
	bool HasGameplayModifierFlag(FGameplayTag modifierFlag) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetUsePercentLeft() const;

	UFUNCTION(BlueprintPure)
	float GetModifierSum(FGameplayTag modifierType, float defaultValue) const;

	UFUNCTION(BlueprintPure)
	float GetModifierMax(FGameplayTag modifierType, float defaultValue) const;

	UFUNCTION(BlueprintPure)
	UInteractor* GetItemInteractor() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	uint8 GetItemIconIndex() const;

	UFUNCTION(BlueprintPure)
	TArray<UItemAddon*> GetItemAddons();

	UFUNCTION(BlueprintPure)
	FString GetIconFilePath() const;

	UFUNCTION(BlueprintCallable)
	EInputInteractionType GetDisplayedInputType() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	int32 GetCount() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetCollector() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DebugPrintStats();

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanUse(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanBeDropped(const ADBDPlayer* dropper) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanBeCollected(const ADBDPlayer* collector, const bool assumeWillDropItem) const;

	UFUNCTION(BlueprintCallable)
	void CallOnCollectorSetBP(FOnCollectorSetBPDelegate callback);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnSurvivorAdded(ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_UseReleased();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Use();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveItemAddon(UItemAddon* addon);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnConsumed(bool forceDiscard);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnCollectorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Discard();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_AddItemAddon(UItemAddon* addon);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ACollectable();
};

FORCEINLINE uint32 GetTypeHash(const ACollectable) { return 0; }
