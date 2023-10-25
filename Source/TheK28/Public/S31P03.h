#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S31P03.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US31P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _genRepairSpeedBoostForDullTotem;

	UPROPERTY(EditAnywhere)
	float _genRepairSpeedBoostForHexTotem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _effectClass;

public:
	US31P03();
};

FORCEINLINE uint32 GetTypeHash(const US31P03) { return 0; }
