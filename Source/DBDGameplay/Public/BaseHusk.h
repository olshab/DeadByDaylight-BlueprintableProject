#pragma once

#include "CoreMinimal.h"
#include "BaseVFX.h"
#include "BaseHusk.generated.h"

class UCustomizedSkeletalMesh;
class USceneComponent;
class UDBDSkeletalMeshComponentBudgeted;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class DBDGAMEPLAY_API ABaseHusk : public ABaseVFX
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDSkeletalMeshComponentBudgeted* _huskMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCustomizedSkeletalMesh* _huskCustomizedSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldDeactivateVFX;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _updateWeaponAccessories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldWeaponBeVisible;

protected:
	UFUNCTION(BlueprintCallable)
	void SetScalarParameterOnAllChildrenMeshes(FName parameterName, float value, USkeletalMeshComponent* mesh);

	UFUNCTION(BlueprintCallable)
	void SetHuskVisibility(bool visible);

public:
	UFUNCTION(BlueprintCallable)
	void InitializeHusk(UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy);

	UFUNCTION(BlueprintPure)
	UCustomizedSkeletalMesh* GetCopiedCustomizedSkeletalMesh() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_InitializeSkeletalMesh(USkeletalMeshComponent* mesh);

public:
	ABaseHusk();
};

FORCEINLINE uint32 GetTypeHash(const ABaseHusk) { return 0; }
