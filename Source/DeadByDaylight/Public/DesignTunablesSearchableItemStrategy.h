#pragma once

#include "CoreMinimal.h"
#include "SearchableItemStrategy.h"
#include "EItemRarity.h"
#include "DesignTunablesSearchableItemStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDesignTunablesSearchableItemStrategy : public USearchableItemStrategy
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity ItemRarity;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _itemIdToSpawn;

public:
	UDesignTunablesSearchableItemStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDesignTunablesSearchableItemStrategy) { return 0; }
