#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SmallGame.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USmallGame : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _detectionConeAngle;

	UPROPERTY(EditAnywhere)
	float _detectionConeAngleReductionRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _totemDetected;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void VFXTotemFound();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SearchForTotems();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TotemFound();

private:
	UFUNCTION(BlueprintPure)
	float GetDetectionConeAngle() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetTotemDetected(bool value);

public:
	USmallGame();
};

FORCEINLINE uint32 GetTypeHash(const USmallGame) { return 0; }
