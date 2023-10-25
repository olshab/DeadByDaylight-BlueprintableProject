#pragma once

#include "CoreMinimal.h"
#include "DBDAIController.h"
#include "DBDAIPlayerController.generated.h"

class AActor;
class UAICharacterBehaviour;
class UAICharacterBehaviourData;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDAIPlayerController : public ADBDAIController
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<UAICharacterBehaviour*> _currentBehaviours;

public:
	UFUNCTION(BlueprintCallable)
	void StopCharacterBehaviour(const UClass* behaviourClass);

	UFUNCTION(BlueprintCallable)
	void StopAllCharacterBehaviours();

	UFUNCTION(BlueprintCallable)
	void StartCharacterBehaviour(UClass* behaviourClass, UAICharacterBehaviourData* characterBehaviourData);

	UFUNCTION(BlueprintCallable)
	void ResumeCharacterBehaviour(const UClass* behaviourClass);

	UFUNCTION(BlueprintCallable)
	void PauseCharacterBehaviour(const UClass* behaviourClass);

private:
	UFUNCTION(BlueprintCallable)
	void OnBehaviourEndedHandler(UAICharacterBehaviour* behaviourEnded);

public:
	UFUNCTION(BlueprintCallable)
	void MovePlayerToActor(AActor* goal, float acceptanceRadius);

public:
	ADBDAIPlayerController();
};

FORCEINLINE uint32 GetTypeHash(const ADBDAIPlayerController) { return 0; }
