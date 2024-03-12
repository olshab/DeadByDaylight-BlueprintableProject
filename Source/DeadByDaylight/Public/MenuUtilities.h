#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MenuUtilities.generated.h"

class UObject;
class ADBDMenuPlayer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UMenuUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static ADBDMenuPlayer* GetLocalPlayerCharacter(const UObject* contextObject);

	UFUNCTION(BlueprintPure)
	static TArray<ADBDMenuPlayer*> GetAllMenuCharacters();

	UFUNCTION(BlueprintPure)
	static bool AreAllGuestCharactersReady();

public:
	UMenuUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UMenuUtilities) { return 0; }
