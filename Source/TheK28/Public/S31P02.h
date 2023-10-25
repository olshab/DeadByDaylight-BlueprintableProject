#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "S31P02.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US31P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _blindnessDurationPerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _blindnessEffect;

	UPROPERTY(EditAnywhere)
	FGameplayTag _itemFlag;

public:
	US31P02();
};

FORCEINLINE uint32 GetTypeHash(const US31P02) { return 0; }
