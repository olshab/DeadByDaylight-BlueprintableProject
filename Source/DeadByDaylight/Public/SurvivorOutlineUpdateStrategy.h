#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "SurvivorOutlineUpdateStrategy.generated.h"

class UGameplayModifierContainer;
class ACamperPlayer;
class UTexture;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _inDangerColorForSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FLinearColor _noRecoveryDyingColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FLinearColor _fullRecoveryDyingColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _saviourColorForSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _colorForKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UTexture* _revealedGradient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UTexture* _nonRevealedGradient;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _revealToKillerDurationTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _revealToKillerLingerTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _trappedIconActive;

public:
	UFUNCTION(BlueprintCallable)
	void SetTrappedIconActive(bool value);

	UFUNCTION(BlueprintPure)
	bool IsBlockingAuraReadingFromKiller(const ASlasherPlayer* killer) const;

	UFUNCTION(BlueprintCallable)
	static bool IsActivelyHidingAuraFromKiller(const ACamperPlayer* subject, const ASlasherPlayer* witness);

	UFUNCTION(BlueprintCallable)
	static TArray<UGameplayModifierContainer*> GetEffectsProtectingFromKillerAuraReading(const ACamperPlayer* subject, const ASlasherPlayer* killer);

public:
	USurvivorOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorOutlineUpdateStrategy) { return 0; }
