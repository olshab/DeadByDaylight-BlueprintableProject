#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "DejaVu.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDejaVu : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _numGeneratorsToReveal;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _actionSpeeds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _generatorAuraColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_RevealedGenerators, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _revealedGenerators;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_RevealedGenerators();

	UFUNCTION(BlueprintCallable)
	void LevelReadyToRevealOutlineGenerators();

public:
	UFUNCTION(BlueprintPure)
	float GetActionSpeedsAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_SetNewGeneratorsToReveal();

	UFUNCTION(BlueprintCallable)
	void Authority_OnGeneratorRepaired(int32 activatedGeneratorCount);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDejaVu();
};

FORCEINLINE uint32 GetTypeHash(const UDejaVu) { return 0; }
