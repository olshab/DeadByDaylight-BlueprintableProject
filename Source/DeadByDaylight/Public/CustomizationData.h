#pragma once

#include "CoreMinimal.h"
#include "ItemAvailability.h"
#include "EPlayerRole.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "EItemRarity.h"
#include "ECustomizationModifier.h"
#include "CustomizationData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AssociatedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole AssociatedRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationModifier Prefix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemUIData UIData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemAvailability Availability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CustomizationId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> SearchTags;

public:
	DEADBYDAYLIGHT_API FCustomizationData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationData) { return 0; }
