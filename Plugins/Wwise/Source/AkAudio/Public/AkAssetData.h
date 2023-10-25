#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAssetData.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkAssetData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 CachedHash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BankLanguage;

public:
	UAkAssetData();
};

FORCEINLINE uint32 GetTypeHash(const UAkAssetData) { return 0; }
