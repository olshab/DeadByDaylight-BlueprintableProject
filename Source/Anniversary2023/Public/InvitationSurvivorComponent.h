#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InvitationPlayerComponent.h"
#include "InvitationSurvivorComponent.generated.h"

class UInteractionDefinition;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationSurvivorComponent : public UInvitationPlayerComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UInteractionDefinition> _reverseBamboozleInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UInteractionDefinition> _fragilePalletInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(BindWidgetOptional))
	UInteractionDefinition* _reverseBamboozle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(BindWidgetOptional))
	UInteractionDefinition* _fragilePallet;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInvitationSurvivorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationSurvivorComponent) { return 0; }
