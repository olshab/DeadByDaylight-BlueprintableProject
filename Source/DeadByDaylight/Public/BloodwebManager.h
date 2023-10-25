#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebManager.generated.h"

class UBloodwebPathfinder;
class UBloodwebGenerator;
class UDBDGameInstance;
class UDBDDesignTunables;
class UBaseBloodwebContentAdapter;
class UBloodwebHandler;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UBloodwebManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UBloodwebGenerator> _bloodwebBuilderClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDGameInstance* _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDDesignTunables* _designTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBaseBloodwebContentAdapter* _bloodWebContentAdapter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodwebHandler* _bloodwebHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodwebPathfinder* _bloodwebPathfinder;

public:
	UFUNCTION(BlueprintCallable)
	void Init(UDBDGameInstance* gameInstance, UDBDDesignTunables* tunables);

public:
	UBloodwebManager();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebManager) { return 0; }
