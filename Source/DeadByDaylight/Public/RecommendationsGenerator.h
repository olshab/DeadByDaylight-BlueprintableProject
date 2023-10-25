#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecommendationsGenerator.generated.h"

class UShopManager;
class UDBDGameInstance;
class URecommendationsFilter;

UCLASS(Blueprintable)
class URecommendationsGenerator : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UShopManager> _shopManager;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FString, URecommendationsFilter*> _filters;

public:
	URecommendationsGenerator();
};

FORCEINLINE uint32 GetTypeHash(const URecommendationsGenerator) { return 0; }
