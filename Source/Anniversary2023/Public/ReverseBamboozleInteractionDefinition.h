#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "ReverseBamboozleInteractionDefinition.generated.h"

class ADBDPlayer;
class ABlockFeedbackBase;
class AWindow;

UCLASS(Blueprintable, Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UReverseBamboozleInteractionDefinition : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _vaultBlockerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<ABlockFeedbackBase>> _windowBlockSelfFeedbackClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<ABlockFeedbackBase>> _windowBlockOtherFeedbackClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AWindow* _authorityWindow;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnWindowBlockBegin(ADBDPlayer* abilityCaster, AWindow* window);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnWindowBlockBegin(ADBDPlayer* abilityCaster, AWindow* window, float duration);

public:
	UReverseBamboozleInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UReverseBamboozleInteractionDefinition) { return 0; }
