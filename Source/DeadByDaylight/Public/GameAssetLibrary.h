#pragma once

#include "CoreMinimal.h"
#include "AssetLibrary.h"
#include "GameAssetLibrary.generated.h"

class UDBDGameInstance;

UCLASS(Blueprintable)
class UGameAssetLibrary : public UAssetLibrary
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDBDGameInstance* _gameInstance;

public:
	UGameAssetLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UGameAssetLibrary) { return 0; }
