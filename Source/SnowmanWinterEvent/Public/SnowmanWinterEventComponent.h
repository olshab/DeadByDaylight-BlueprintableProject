#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SnowmanWinterEventComponent.generated.h"

class UStatusEffect;
class USnowmanSpawnPlacementStrategy;
class ASnowman;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API USnowmanWinterEventComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _numbSnowmenToSpawnAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USnowmanSpawnPlacementStrategy> _snowmanSpawnPlacementStrategyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ASnowman> _snowmanClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorInSnowmanEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _killerInSnowmanEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USnowmanSpawnPlacementStrategy* _snowmanSpawnPlacementStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ASnowman*> _snowmen;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_Winter2021RecalculateSpawnPoints();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_Winter2021ForceRespawnAllSnowmen();

public:
	USnowmanWinterEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanWinterEventComponent) { return 0; }
