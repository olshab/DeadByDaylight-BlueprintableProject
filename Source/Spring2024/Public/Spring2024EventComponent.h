#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "Spring2024EventComponent.generated.h"

class UStatusEffect;
class ABloodZone;
class USpring2024EventCheatComponent;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class USpring2024EventComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorEventStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _killerEventStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _offeringStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDBDTunableRowHandle> _dreamLevelBonusValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ABloodZone> _bloodZoneClassToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodZoneSpawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodZoneHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USpring2024EventCheatComponent> _eventCheatComponentClass;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	USpring2024EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpring2024EventComponent) { return 0; }
