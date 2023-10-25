#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "CharacterToolData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterToolData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OutfitId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CharmId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SurvivorHead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SurvivorTorso;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SurvivorLegs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName KillerHead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName KillerBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName KillerWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAnimBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AnimAsset;

public:
	DEADBYDAYLIGHT_API FCharacterToolData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterToolData) { return 0; }
