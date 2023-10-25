#pragma once

#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "ItemAvailability.h"
#include "OutfitData.generated.h"

USTRUCT(BlueprintType)
struct FOutfitData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemUIData UIData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemAvailability Availability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> OutfitItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CollectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CollectionDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CustomizedAudioStateCollection;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _outfitId;

public:
	DEADBYDAYLIGHT_API FOutfitData();
};

FORCEINLINE uint32 GetTypeHash(const FOutfitData) { return 0; }
