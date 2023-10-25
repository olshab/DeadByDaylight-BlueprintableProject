#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "EKillerAbilities.h"
#include "ELoadoutItemType.h"
#include "BaseItemData.h"
#include "EItemRarity.h"
#include "ItemAvailability.h"
#include "EPlayerRole.h"
#include "EItemHandPosition.h"
#include "ItemData.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FItemData: public FBaseItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<USkeletalMesh> ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemHandPosition HandPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Chest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerAbilities RequiredKillerAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemAvailability Availability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInNonViolentBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AntiDLC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Bloodweb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanKeepInLoadout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBotSupported;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanUseAfterEventEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELoadoutItemType ItemType;

public:
	DEADBYDAYLIGHT_API FItemData();
};

FORCEINLINE uint32 GetTypeHash(const FItemData) { return 0; }
