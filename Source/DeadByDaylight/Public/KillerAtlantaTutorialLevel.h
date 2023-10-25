#pragma once

#include "CoreMinimal.h"
#include "EKillerTutorialEndGameType.h"
#include "AtlantaTutorialLevel.h"
#include "KillerAtlantaTutorialLevel.generated.h"

class AGenerator;
class AEscapeDoor;
class ASlasherPlayer;
class ACamperPlayer;
class AWindow;
class AHatch;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AKillerAtlantaTutorialLevel : public AAtlantaTutorialLevel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ASlasherPlayer> LocallyControllerSlasherPlayer;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ACamperPlayer> ChaseCamper;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ACamperPlayer> BearTrapCamper;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<AGenerator> KickGenerator;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<AWindow> VaultWindow;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<AEscapeDoor> EscapeDoor;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<AHatch> Hatch;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TriggerExitGameSetup();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TriggerEndGameSequenceAnimation(EKillerTutorialEndGameType camperDeathType);

	UFUNCTION(BlueprintCallable)
	void SetVaultWindow(AWindow* window);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetupEndGameTutorialPhase();

	UFUNCTION(BlueprintCallable)
	void SetHatch(AHatch* targetHatch);

	UFUNCTION(BlueprintCallable)
	void SetGenerator(AGenerator* generator);

	UFUNCTION(BlueprintCallable)
	void SetEscapeDoor(AEscapeDoor* targetEscapeDoor);

	UFUNCTION(BlueprintCallable)
	void SetControlledSlasherPlayer(ASlasherPlayer* slasherPlayer);

	UFUNCTION(BlueprintCallable)
	void SetChaseSurvivor(ACamperPlayer* camperPlayer);

	UFUNCTION(BlueprintCallable)
	void SetBearTrapSurvivor(ACamperPlayer* camperPlayer);

	UFUNCTION(BlueprintCallable)
	void CompleteEscapeRequirements();

public:
	AKillerAtlantaTutorialLevel();
};

FORCEINLINE uint32 GetTypeHash(const AKillerAtlantaTutorialLevel) { return 0; }
