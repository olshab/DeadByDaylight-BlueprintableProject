#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K33P02.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteStatusEffect;

	UPROPERTY(EditAnywhere)
	float _hasteDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hasteAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _hasteEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHasteAmount() const;

public:
	UK33P02();
};

FORCEINLINE uint32 GetTypeHash(const UK33P02) { return 0; }
