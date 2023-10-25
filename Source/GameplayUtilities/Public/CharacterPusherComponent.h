#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterPusherComponent.generated.h"

class UBasePushStrategyComponent;
class ACharacter;
class UCapsuleComponent;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UCharacterPusherComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ACharacter*> _charactersToPush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSet<ACharacter*> _ignoredCharacters;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _characterDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _characterCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBasePushStrategyComponent* _pushStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACharacter*> _ignoredByPushedCharacters;

public:
	UFUNCTION(BlueprintCallable)
	void SetIgnoredCharacter(ACharacter* character, const bool ignore);

protected:
	UFUNCTION(BlueprintCallable)
	void OnCharacterDetectorOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

public:
	UFUNCTION(BlueprintCallable)
	void Construct(UCapsuleComponent* characterDetector, UCapsuleComponent* characterCollision, UBasePushStrategyComponent* pushStrategy);

public:
	UCharacterPusherComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterPusherComponent) { return 0; }
