#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterCollection.generated.h"

class ACharacter;
class ACamperPlayer;
class ASlasherPlayer;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterCollection : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _killer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ACamperPlayer*> _survivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> _mainDBDPlayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> _otherCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ACharacter*> _nonPlayableCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ACharacter*> _allCharacters;

public:
	UFUNCTION(BlueprintPure)
	TSet<ACamperPlayer*> GetSurvivors() const;

	UFUNCTION(BlueprintPure)
	TSet<ADBDPlayer*> GetOtherCharacters() const;

	UFUNCTION(BlueprintPure)
	TSet<ADBDPlayer*> GetMainDBDPlayers() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetKiller() const;

	UFUNCTION(BlueprintPure)
	TArray<ADBDPlayer*> GetAllDBDPlayers() const;

public:
	UCharacterCollection();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterCollection) { return 0; }
