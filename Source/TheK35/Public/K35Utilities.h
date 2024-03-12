#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K35Utilities.generated.h"

class ACamperPlayer;
class AK35Power;
class UObject;
class ASlasherPlayer;

UCLASS(Blueprintable)
class UK35Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsSurvivorAbleToBeAffectedByPower(const ACamperPlayer* survivor, const ASlasherPlayer* killer);

	UFUNCTION(BlueprintPure)
	static AK35Power* GetK35Power(const UObject* worldContextObject);

public:
	UK35Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK35Utilities) { return 0; }
