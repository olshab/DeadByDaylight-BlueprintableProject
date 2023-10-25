#pragma once

#include "CoreMinimal.h"
#include "EFatherKeyCardState.h"
#include "BaseCamperCollectable.h"
#include "WormholeFatherKeyCard.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class AWormholeFatherKeyCard : public ABaseCamperCollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_KeyCardState, meta=(AllowPrivateAccess=true))
	EFatherKeyCardState _keyCardState;

private:
	UFUNCTION(BlueprintCallable)
	void RemoveInitialTag(ADBDPlayer* character) const;

	UFUNCTION(BlueprintCallable)
	void OnRep_KeyCardState();

public:
	UFUNCTION(BlueprintPure)
	EFatherKeyCardState GetKeyCardState() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKeyCardDropped();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKeyCardCollected();

private:
	UFUNCTION(BlueprintCallable)
	void ApplyInitialTag(ADBDPlayer* character) const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AWormholeFatherKeyCard();
};

FORCEINLINE uint32 GetTypeHash(const AWormholeFatherKeyCard) { return 0; }
