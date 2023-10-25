#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StreamVideoSubsystem.generated.h"

class UStreamVideoManager;
class UStreamVideoFactory;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UStreamVideoSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UStreamVideoManager* StreamVideoManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UStreamVideoFactory* StreamVideoFactory;

public:
	UStreamVideoSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UStreamVideoSubsystem) { return 0; }
