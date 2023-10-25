#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebGenerator.generated.h"

class UBloodwebTunables;
class UBloodwebDistribution;
class IDBDBloodwebDefinitionBase;
class UDBDDesignTunables;
class UBloodwebSettings;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UBloodwebGenerator : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FRandomStream _randomizationStream;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> _selectedNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FName> _selectedContent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDDesignTunables* _designTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodwebTunables* _bloodwebTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _alternativePathOccurenceFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodwebDistribution* _dataDistribution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UBloodwebSettings* _bloodwebSettings;

public:
	UBloodwebGenerator();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebGenerator) { return 0; }
