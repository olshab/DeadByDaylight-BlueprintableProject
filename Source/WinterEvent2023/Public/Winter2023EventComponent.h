#pragma once

#include "CoreMinimal.h"
#include "BaseSnowmanEventComponent.h"
#include "DBDTunableRowHandle.h"
#include "Winter2023EventComponent.generated.h"

class UAuthoritativeActorPoolComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API UWinter2023EventComponent : public UBaseSnowmanEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxNumSpawnableMrMarch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minNumMrMarchAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _percentChanceSpawnMrMarch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _mrMarchSpawnLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _snowmanRespawnLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _mrMarchPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _snowmanActorPool;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_Winter2023SetMaxMrMarchAndPercentChance(int32 maxMrMarch, float percentChance);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_Winter2023ForceRespawnSnowmen();

public:
	UWinter2023EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWinter2023EventComponent) { return 0; }
