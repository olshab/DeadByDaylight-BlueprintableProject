#pragma once

#include "CoreMinimal.h"
#include "OfferingEffect.h"
#include "ItemData.h"
#include "PerkLevelText.h"
#include "EItemRarity.h"
#include "EPerkCategory.h"
#include "UObject/SoftObjectPtr.h"
#include "EPerkArchetype.h"
#include "PerkProperties.generated.h"

class UPerk;

USTRUCT(BlueprintType)
struct FPerkProperties: public FItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOfferingEffect> Effects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AssociatedPlayerIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MandatoryOnBloodweblevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TeachableOnBloodweblevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AtlantaTeachableLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPerkCategory> PerkCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPerkArchetype PerkArchetype;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UPerk> PerkBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize)
	TArray<EItemRarity> PerkLevelRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPerkLevelText> PerkLevelTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize)
	FText PerkLevel1Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize)
	FText PerkLevel2Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize)
	FText PerkLevel3Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AtlantaActivatableInteractionIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AtlantaLowPriority;

public:
	DEADBYDAYLIGHT_API FPerkProperties();
};

FORCEINLINE uint32 GetTypeHash(const FPerkProperties) { return 0; }
