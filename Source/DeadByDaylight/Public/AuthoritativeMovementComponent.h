#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AuthoritativeMovementComponent.generated.h"

class ACharacter;
class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAuthoritativeMovementComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACharacter*> _charactersToPush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACharacter*> _stopIgnoreCharacterOnEndOverlap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _pawnDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AuthoritativeIgnoreOverlapCharacters, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACharacter*> _authoritativeIgnoreOverlapCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACharacter*> _previousAuthoritativeIgnoreOverlapCharacters;

public:
	UFUNCTION(BlueprintCallable)
	void SetPawnDetector(UCapsuleComponent* pawnDetector);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_AuthoritativeIgnoreOverlapCharacters();

protected:
	UFUNCTION(BlueprintCallable)
	void OnPawnDetectorOverlapExit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnPawnDetectorOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAuthoritativeMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAuthoritativeMovementComponent) { return 0; }
