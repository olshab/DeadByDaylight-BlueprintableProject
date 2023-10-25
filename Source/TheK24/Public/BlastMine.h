#pragma once

#include "CoreMinimal.h"
#include "GeneratorTrapPerk.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "BlastMine.generated.h"

class UGeneratorBlastMinePlacerComponent;
class ABlastMineFirecracker;
class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBlastMine : public UGeneratorTrapPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UGeneratorBlastMinePlacerComponent> _blastMinePlacerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ABlastMineFirecracker> _blastMineFirecrackerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ABlastMineFirecracker* _blastMine;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void TrapAttachedToGenerator_Cosmetic(AGenerator* trappedGenerator);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ThrowBubbleIndicator_Cosmetic(FTransform location);

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_TrapActivatedLoudNotification(FTransform location);

public:
	UBlastMine();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMine) { return 0; }
