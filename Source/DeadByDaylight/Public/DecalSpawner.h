#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DecalSpawner.generated.h"

class UDecalCollection;
class USpawnerStrategy;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDecalSpawner : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDecalCollection* _decalCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USpawnerStrategy* _spawnerStrategy;

public:
	UFUNCTION(BlueprintCallable)
	USpawnerStrategy* GetSpawnerStrategy();

public:
	UDecalSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UDecalSpawner) { return 0; }
