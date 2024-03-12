#pragma once

#include "CoreMinimal.h"
#include "DBDBaseMatchGameMode.h"
#include "OnPlayersLoadoutsCreated.h"
#include "Templates/SubclassOf.h"
#include "DBDGameMode.generated.h"

class UStatusEffect;
class APlayerController;
class APlayerStart;
class UNavmeshGeneratorComponent;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API ADBDGameMode : public ADBDBaseMatchGameMode
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayersLoadoutsCreated OnPlayersLoadoutsCreated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<APlayerController> _killerPlayerControllerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<APlayerController> _survivorPlayerControllerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<APlayerStart*> _initialPlayerStarts;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 KillerCreationPositionOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _gateBlockedStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UNavmeshGeneratorComponent* _navmeshGeneratorComponent;

protected:
	UFUNCTION(BlueprintCallable)
	void SetPlayerCount(int32 playerAmount);

	UFUNCTION(BlueprintCallable)
	void LevelLoaded(const FString& levelName);

public:
	UFUNCTION(BlueprintPure)
	bool IsEscapeOpen() const;

protected:
	UFUNCTION(BlueprintCallable)
	void InitializeEscapeRequirements();

	UFUNCTION(BlueprintCallable)
	void HostGame();

	UFUNCTION(BlueprintPure)
	bool AreLoadoutsCreated() const;

public:
	ADBDGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGameMode) { return 0; }
