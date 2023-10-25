#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K31P01.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hasteEffectMovementSpeedIncrease;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _hasteEffectDurationSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _authority_hasteStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isPerkActive;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteEffectMovementSpeedIncrease() const;

	UFUNCTION(BlueprintPure)
	float GetHasteEffectDurationAtLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31P01();
};

FORCEINLINE uint32 GetTypeHash(const UK31P01) { return 0; }
