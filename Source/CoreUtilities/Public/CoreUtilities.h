#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreUtilities.generated.h"

class UWorld;
class UObject;
class UGameInstance;

UCLASS(Blueprintable)
class COREUTILITIES_API UCoreUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static UWorld* GetWorldFromContext(const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable)
	static TArray<int32> GetRandomValuesFromArray(const TArray<int32>& values, const int32 numberOfDesiredValues);

	UFUNCTION(BlueprintPure)
	static UWorld* GetGlobalWorld();

	UFUNCTION(BlueprintPure)
	static UGameInstance* GetGameInstance(const UObject* worldContextObject);

public:
	UCoreUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCoreUtilities) { return 0; }
