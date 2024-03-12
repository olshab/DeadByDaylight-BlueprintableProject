#pragma once

#include "CoreMinimal.h"
#include "PoolableActor.h"
#include "Interactable.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "SnowmanSpawnData.h"
#include "SnowmanBase.generated.h"

class USnowmanAttackableComponent;

UCLASS(Blueprintable)
class SNOWMANWINTEREVENT_API ASnowmanBase : public AInteractable, public IPoolableActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _timeToRespawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _timeToBeDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	USnowmanAttackableComponent* _snowmanAttackable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _concealSnowmanForPlayerTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SpawnData)
	FSnowmanSpawnData _spawnData;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAcquiredFromPool, meta=(AllowPrivateAccess=true))
	bool _isAcquiredFromPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsHidden, meta=(AllowPrivateAccess=true))
	bool _isHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_MaterialVariantIndex, meta=(AllowPrivateAccess=true))
	int32 _materialVariantIndex;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SpawnData();

	UFUNCTION(BlueprintCallable)
	void OnRep_MaterialVariantIndex();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsHidden();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsAcquiredFromPool();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetSnowmanMaterialVariant(const int32 materialVariantIndex);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASnowmanBase();
};

FORCEINLINE uint32 GetTypeHash(const ASnowmanBase) { return 0; }
