#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexNoOneEscapesDeath.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHexNoOneEscapesDeath : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteImposedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exposedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _revealCurseWhenTotemShownToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _revealCurseWhenSurvivorGetHits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _auraRevealStartDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _auraRevealEndDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _auraRevealDuration;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _hastePerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SetShouldActivateTotemOutline, meta=(AllowPrivateAccess=true))
	bool _shouldActivateTotemOutline;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SetShouldActivateTotemOutline();

public:
	UFUNCTION(BlueprintPure)
	float GetHasteAtLevel();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHexNoOneEscapesDeath();
};

FORCEINLINE uint32 GetTypeHash(const UHexNoOneEscapesDeath) { return 0; }
