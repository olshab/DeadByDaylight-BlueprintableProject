#pragma once

#include "CoreMinimal.h"
#include "ModifierSubjectProvider.h"
#include "TwinSubjectProvider.generated.h"

class ASlasherPlayer;
class AConjoinedTwin;

UCLASS(Blueprintable)
class UTwinSubjectProvider : public UModifierSubjectProvider
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnTwinSet(AConjoinedTwin* twin);

	UFUNCTION(BlueprintCallable)
	void ListenToTwinSet(ASlasherPlayer* killer);

public:
	UTwinSubjectProvider();
};

FORCEINLINE uint32 GetTypeHash(const UTwinSubjectProvider) { return 0; }
