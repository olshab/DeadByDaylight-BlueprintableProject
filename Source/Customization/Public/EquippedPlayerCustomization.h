#pragma once

#include "CoreMinimal.h"
#include "CharmIdSlot.h"
#include "CharacterCustomization.h"
#include "EquippedPlayerCustomization.generated.h"

USTRUCT(BlueprintType)
struct FEquippedPlayerCustomization
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCharacterCustomization _equippedCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FCharmIdSlot> _equippedCharms;

public:
	CUSTOMIZATION_API FEquippedPlayerCustomization();
};

FORCEINLINE uint32 GetTypeHash(const FEquippedPlayerCustomization) { return 0; }
