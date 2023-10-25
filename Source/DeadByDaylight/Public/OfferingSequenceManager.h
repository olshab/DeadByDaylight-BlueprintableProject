#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "EOfferingSequenceState.h"
#include "OfferingSequenceManager.generated.h"

class ACameraActor;
class ADBDLobbyHud;
class UDBDGameInstance;
class UOfferingHandler;
class APlayerController;
class AOfferingSequenceAssets;
class AOfferingCard;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AOfferingSequenceManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDGameInstance* _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	APlayerController* _localPlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UOfferingHandler* _offeringHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AOfferingSequenceAssets* _sequenceAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDLobbyHud* _hud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACameraActor* _offeringCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<uint8, AOfferingCard*> _spawnedCards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSubclassOf<AOfferingCard> _defaultCardsClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSubclassOf<AOfferingCard> _eventCardsClass;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HandleSequenceStateChanged(EOfferingSequenceState state);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HandleSequenceStarted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HandleSequenceEnded();

public:
	UFUNCTION(BlueprintPure)
	EOfferingSequenceState GetCurrentState() const;

private:
	UFUNCTION(BlueprintCallable)
	void FadeInScreen();

public:
	UFUNCTION(BlueprintPure)
	bool ContainsEventCard() const;

	UFUNCTION(BlueprintPure)
	bool ContainsDefaultCard() const;

public:
	AOfferingSequenceManager();
};

FORCEINLINE uint32 GetTypeHash(const AOfferingSequenceManager) { return 0; }
