#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "VaultData.h"
#include "Window.generated.h"

class UPrimitiveComponent;
class UBoxComponent;
class UBlockableComponent;
class ADBDPlayer;
class ACamperPlayer;
class UInteractionDefinition;
class UDBDNavEvadeLoopComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AWindow : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPrimitiveComponent* _windowCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxComponent* _collisionBox1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxComponent* _collisionBox2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_blockedByLevel)
	bool _isBlockedByLevel;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, FVaultData> _survivorVaultData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBlockableComponent* _blockableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavEvadeLoopComponent* _navEvadeLoopComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_blockedByLevel();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnFastVault(ADBDPlayer* player, UInteractionDefinition* interaction);

public:
	UFUNCTION(BlueprintCallable)
	void NotifyOnFastVault(ADBDPlayer* player, UInteractionDefinition* interaction);

	UFUNCTION(BlueprintPure)
	bool IsWindowVaultBlockedFor(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintCallable)
	void Authority_SetBlockedByLevel(bool isBlockedByLevel);

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnVaultInternal(ADBDPlayer* player, bool canBlockVault);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AWindow();
};

FORCEINLINE uint32 GetTypeHash(const AWindow) { return 0; }
