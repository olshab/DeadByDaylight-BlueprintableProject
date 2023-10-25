#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDLogo.generated.h"

UCLASS(Blueprintable)
class ADBDLogo : public AActor
{
	GENERATED_BODY()

public:
	ADBDLogo();
};

FORCEINLINE uint32 GetTypeHash(const ADBDLogo) { return 0; }
