#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseSnowmanEventComponent.h"
#include "SnowmanWinterEventComponent.generated.h"

class ASnowman;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USnowmanWinterEventComponent : public UBaseSnowmanEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ASnowman> _snowmanClass;

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
