#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ELoadoutItemType.h"
#include "EItemRarity.h"
#include "SecretBotMatchLoadoutDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSecretBotMatchLoadoutDefinition: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 BotRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELoadoutItemType ItemEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity ItemRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 NbAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity AddonsRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity OfferingRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 NbGenericPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 NbCharacterSpecificPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> PerkTiersList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> CharactersIndexList;

public:
	ONBOARDING_API FSecretBotMatchLoadoutDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FSecretBotMatchLoadoutDefinition) { return 0; }
