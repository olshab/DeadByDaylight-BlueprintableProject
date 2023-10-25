#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Saboteur.generated.h"

class UMeatHookOutlineUpdateStrategy;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USaboteur : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _cooldownDuration;

	UPROPERTY(EditAnywhere)
	float _revealHookDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _scourgeHooksAuraColour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _saboteurEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UMeatHookOutlineUpdateStrategy*> _revealedMeatHooksOultineStrategy;

public:
	UFUNCTION(BlueprintPure)
	FLinearColor GetScourgeHooksAuraColour() const;

	UFUNCTION(BlueprintPure)
	float GetRevealHookDistanceAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownDurationAtLevel() const;

public:
	USaboteur();
};

FORCEINLINE uint32 GetTypeHash(const USaboteur) { return 0; }
