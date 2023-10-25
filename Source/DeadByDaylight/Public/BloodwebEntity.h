#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebEntity.generated.h"

class UDBDGameInstance;
class IDBDBloodwebDefinitionBase;
class UBloodwebTunables;

UCLASS(Blueprintable)
class UBloodwebEntity : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDGameInstance* _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodwebTunables* _bloodwebTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition;

public:
	UBloodwebEntity();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebEntity) { return 0; }
