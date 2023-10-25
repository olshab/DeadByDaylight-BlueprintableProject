#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "AtlantaRitualDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAtlantaRitualDefinition: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Texture;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualDefinition) { return 0; }
