#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem_SurvivorUnbroken.generated.h"

class UDBDRankDesignTunables;
class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDBDEmblem_SurvivorUnbroken : public UDBDEmblem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _pointsForTimeAlive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

public:
	UDBDEmblem_SurvivorUnbroken();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_SurvivorUnbroken) { return 0; }
