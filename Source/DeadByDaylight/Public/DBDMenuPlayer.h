#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "StandDisplayable.h"
#include "ECustomizationCategory.h"
#include "DBDBasePlayer.h"
#include "CharmAttachable.h"
#include "OnItemEquipped.h"
#include "EItemHandPosition.h"
#include "EGameFlowStep.h"
#include "DBDMenuPlayer.generated.h"

class UAnimInstance;
class ADBDMenuPlayer;
class UCharmSpawnerComponent;
class UMaterialInterface;
class UCustomizedSkeletalMesh;
class UDBDSkeletalMeshComponentBudgeted;
class UMaterialHelper;
class AActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDMenuPlayer : public ADBDBasePlayer, public IStandDisplayable, public ICharmAttachable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RoleSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOnline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnItemEquipped OnItemEquipped;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UAnimInstance> MoriPreviewAnimClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftObjectPtr<UMaterialInterface> DarkMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EItemHandPosition _handPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMaterialHelper* MaterialHelper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCustomizedSkeletalMesh* _customizedSkeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _equippedItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _blockRotationDuringSpawnAnimationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isLocalPlayerCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isReady;

private:
	UFUNCTION(BlueprintCallable)
	void WrappedOnDestroyed(AActor* DestroyedActor);

public:
	UFUNCTION(BlueprintPure)
	bool ShouldShowSpawnAnimation() const;

	UFUNCTION(BlueprintPure)
	bool ShouldApplyPositionOffset() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RestartInSequence_Internal();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayCharacterLevelUpVFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPlayerMaxPrestige();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLocalPlayerSpawned();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLocalPlayerReadyChanged(bool isReady);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnIsReadyChanged(bool isReady);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnGuestPlayerSpawned(ADBDMenuPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnGuestPlayerReadyChanged(ADBDMenuPlayer* player, bool isReady);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnGuestPlayerDespawned(ADBDMenuPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCustomizationTransactionCompleted(ECustomizationCategory category);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAllPlayersReadyInOnlineLobby();

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	bool IsInMenuPlayer();

	UFUNCTION(BlueprintCallable)
	bool HasSameCharacterInLobby();

	UFUNCTION(BlueprintPure)
	bool GetIsReady() const;

	UFUNCTION(BlueprintPure)
	bool GetIsLocalPlayerCharacter() const;

	UFUNCTION(BlueprintPure)
	EItemHandPosition GetHandPosition() const;

protected:
	UFUNCTION(BlueprintPure)
	EGameFlowStep GetCurrentMenu() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UCharmSpawnerComponent* GetCharmSpawnerComponent();

public:
	UFUNCTION(BlueprintPure)
	float GetBlockRotationAfterSpawningTime() const;

	UFUNCTION(BlueprintCallable)
	void BlockCharacterRotation(bool shouldBlock);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BeginDestroySequence_Internal();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BeginCreateSequence();

public:
	ADBDMenuPlayer();
};

FORCEINLINE uint32 GetTypeHash(const ADBDMenuPlayer) { return 0; }
