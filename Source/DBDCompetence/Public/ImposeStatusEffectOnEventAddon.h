#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "StatusEffectInfo.h"
#include "ImposeStatusEffectOnEventAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UImposeStatusEffectOnEventAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FStatusEffectInfo> _statusEffects;

public:
	UImposeStatusEffectOnEventAddon();
};

FORCEINLINE uint32 GetTypeHash(const UImposeStatusEffectOnEventAddon) { return 0; }
