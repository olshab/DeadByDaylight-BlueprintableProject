#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "KillerClosetActorsTypes.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FKillerClosetActorsTypes: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag KillerPresenceTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> ClosetActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketToSpawnOn;

public:
	DEADBYDAYLIGHT_API FKillerClosetActorsTypes();
};

FORCEINLINE uint32 GetTypeHash(const FKillerClosetActorsTypes) { return 0; }
