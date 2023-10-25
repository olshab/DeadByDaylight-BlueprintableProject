#pragma once

#include "CoreMinimal.h"
#include "ItemModifier.h"
#include "Templates/SubclassOf.h"
#include "ItemAddonInitializationData.h"
#include "ItemAddon.generated.h"

class ACollectable;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UItemAddon : public UItemModifier
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACollectable> BaseItemType;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _needsSetup;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TokenCount, Transient, meta=(AllowPrivateAccess=true))
	int32 _tokenCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _maxTokenCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AddonInitializationData, Transient, meta=(AllowPrivateAccess=true))
	FItemAddonInitializationData _addonInitializationData;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetUpAddon();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TokenCount(int32 oldCount);

	UFUNCTION(BlueprintCallable)
	void OnRep_AddonInitializationData();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPostItemAddonsCreation(ADBDPlayer* player, ACollectable* item);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_SetBaseItem(ACollectable* baseItem);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AddAddonToItem(ACollectable* item);

	UFUNCTION(BlueprintPure)
	bool IsSecondaryAction() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsReadyForSetUp() const;

public:
	UFUNCTION(BlueprintPure)
	int32 GetTokenCount() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaxTokenCount() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DebugPrintStats();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetTokenCount(int32 value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetMaxTokenCount(int32 value);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Authority_OnCollectablePickedUp(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Authority_OnCollectableDropped(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_IncrementToken();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DecrementToken();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_ApplyMetaModifiers();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UItemAddon();
};

FORCEINLINE uint32 GetTypeHash(const UItemAddon) { return 0; }
