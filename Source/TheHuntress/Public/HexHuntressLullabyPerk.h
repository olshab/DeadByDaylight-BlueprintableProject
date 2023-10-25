#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexHuntressLullabyPerk.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHexHuntressLullabyPerk : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _huntressLullabyStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _possiblePlayerStateTagsInProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _huntressLullabyStatusEffects;

public:
	UHexHuntressLullabyPerk();
};

FORCEINLINE uint32 GetTypeHash(const UHexHuntressLullabyPerk) { return 0; }
