#pragma once

#include "CoreMinimal.h"
#include "TotemBoundPerk.h"
#include "HexPerk.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHexPerk : public UTotemBoundPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PlayersWhoKnowCurse, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _playersWhoKnowCurse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _oldPlayersWhoKnowCurse;

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateCursedStatusViewOnLocalPlayer();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_PlayersWhoKnowCurse();

public:
	UFUNCTION(BlueprintPure)
	bool IsCurseRevealedToPlayer(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetCurseRevealedToPlayer(ADBDPlayer* player, const bool revealed);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RevealCurseToAllSurvivors(bool revealed);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHexPerk();
};

FORCEINLINE uint32 GetTypeHash(const UHexPerk) { return 0; }
