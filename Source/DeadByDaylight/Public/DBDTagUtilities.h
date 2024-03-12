#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDTagUtilities.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDTagUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void GetAllActorsWithReplicatedTag(const UObject* worldContextObject, FName tag, TArray<AActor*>& outActors);

	UFUNCTION(BlueprintCallable)
	static void GetAllActorsOfClassWithReplicatedTag(const UObject* worldContextObject, TSubclassOf<AActor> actorClass, FName tag, TArray<AActor*>& outActors);

	UFUNCTION(BlueprintCallable)
	static bool ActorHasReplicatedTag(const AActor* actor, FName tag);

public:
	UDBDTagUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDTagUtilities) { return 0; }
