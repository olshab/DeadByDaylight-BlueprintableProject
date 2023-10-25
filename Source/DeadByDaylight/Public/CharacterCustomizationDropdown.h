#pragma once

#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "CharacterCustomizationDropdown.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCustomizationDropdown: public FCharacterDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OutfitId;

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

public:
	DEADBYDAYLIGHT_API FCharacterCustomizationDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCustomizationDropdown) { return 0; }
