#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K28LockerCosmeticHelperActor.generated.h"

class ALocker;
class USkeletalMeshComponent;
class UMaterialHelper;

UCLASS(Blueprintable)
class AK28LockerCosmeticHelperActor : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAssociatedLockerActorSet();

	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetSkeletalMesh() const;

	UFUNCTION(BlueprintPure)
	UMaterialHelper* GetMaterialHelper() const;

public:
	UFUNCTION(BlueprintPure)
	ALocker* GetLocker() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLockerGrabStateChanged(bool isLockerGrabOngoing);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLockedStateChanged(bool isLockerLocked);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerTeleportationToLockerStart();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerTeleportationToLockerEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerInsideLockerRevealed();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerExitLocker();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerEnteredLocker();

public:
	AK28LockerCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK28LockerCosmeticHelperActor) { return 0; }
