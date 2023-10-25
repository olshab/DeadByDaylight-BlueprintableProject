#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S37P03.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US37P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _maxTokens;

	UPROPERTY(EditAnywhere)
	int32 _repairSpeedDebuffTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _repairSpeedDebuffAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _allowSearchChestForToolboxEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _repairSpeedDebuffEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _allowSearchChestForToolboxEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetRepairSpeedDebuffTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetRepairSpeedDebuffAmount() const;

public:
	US37P03();
};

FORCEINLINE uint32 GetTypeHash(const US37P03) { return 0; }
