#pragma once

#include "CoreMinimal.h"
#include "ModifierSubjectProvider.h"
#include "KillerSubjectProvider.generated.h"

class ASlasherPlayer;

UCLASS(Blueprintable)
class UKillerSubjectProvider : public UModifierSubjectProvider
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void RegisterWhenKillerSet(ASlasherPlayer* killer);

public:
	UKillerSubjectProvider();
};

FORCEINLINE uint32 GetTypeHash(const UKillerSubjectProvider) { return 0; }
