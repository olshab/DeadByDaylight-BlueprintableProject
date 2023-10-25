#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AssetLibrary.generated.h"

class UObjectLibrary;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAssetLibrary : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UObjectLibrary* _objectLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float SecondsDelayBetweenBatch;

public:
	UAssetLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UAssetLibrary) { return 0; }
