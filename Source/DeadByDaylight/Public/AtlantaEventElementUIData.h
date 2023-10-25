#pragma once

#include "CoreMinimal.h"
#include "EPromoPackContentType.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaEventElementUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaEventElementUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPromoPackContentType ElementType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName NameID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FColor Color;

public:
	DEADBYDAYLIGHT_API FAtlantaEventElementUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaEventElementUIData) { return 0; }
