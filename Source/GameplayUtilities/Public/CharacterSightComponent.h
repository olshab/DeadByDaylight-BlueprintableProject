#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Activatable.h"
#include "AuthorityDiscernedCharacter.h"
#include "Templates/SubclassOf.h"
#include "DiscernibleCharacter.h"
#include "ActivationDefinition.h"
#include "CharacterSightComponent.generated.h"

class ACharacter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UCharacterSightComponent : public UActorComponent, public IActivatable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumCharacterScreenPercentInZoneTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumCharacterScreenPercentInZoneUntrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumCharacterScreenPercentNotInZoneTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumCharacterScreenPercentNotInZoneUntrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumCharacterVisiblePixelsPercentTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumCharacterVisiblePixelsPercentUntrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maximumSightDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _screenVisibilityZoneRadiusPercentX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _screenVisibilityZoneRadiusPercentY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sightingDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _discerningDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _undiscerningDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ACharacter> _sightableCharacterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DiscernibleCharacters, Transient, meta=(AllowPrivateAccess=true))
	TArray<FAuthorityDiscernedCharacter> _discernedCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FDiscernibleCharacter> _localDiscernibleCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _debugMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CanSee, meta=(AllowPrivateAccess=true))
	bool _canSee;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FActivationDefinition _activationDefinition;

public:
	UFUNCTION(BlueprintCallable)
	void SetScreenVisibilityZoneRadiusPercent(float valueX, float valueY);

	UFUNCTION(BlueprintCallable)
	void SetMinimumCharacterVisiblePixelsPercent(float trigger, float untrigger);

	UFUNCTION(BlueprintCallable)
	void SetMinimumCharacterScreenPercentNotInZone(float trigger, float untrigger);

	UFUNCTION(BlueprintCallable)
	void SetMinimumCharacterScreenPercentInZone(float trigger, float untrigger);

	UFUNCTION(BlueprintCallable)
	void SetMaximumSightDistance(float value);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_UpdateDiscernedCharacters(const TArray<ACharacter*>& characters);

	UFUNCTION(BlueprintCallable)
	void OnRep_DiscernibleCharacters();

	UFUNCTION(BlueprintCallable)
	void OnRep_CanSee();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCharacterSightComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterSightComponent) { return 0; }
