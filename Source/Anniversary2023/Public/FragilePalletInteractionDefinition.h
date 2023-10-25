#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "Templates/SubclassOf.h"
#include "FragilePalletInteractionDefinition.generated.h"

class APallet;

UCLASS(Blueprintable, Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFragilePalletInteractionDefinition : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<APallet> _fragilePalletClass;

public:
	UFragilePalletInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UFragilePalletInteractionDefinition) { return 0; }
