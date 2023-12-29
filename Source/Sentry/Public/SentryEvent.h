#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESentryLevel.h"
#include "SentryEvent.generated.h"

UCLASS(Blueprintable)
class SENTRY_API USentryEvent : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMessage(const FString& Message);

	UFUNCTION(BlueprintCallable)
	void SetLevel(ESentryLevel Level);

	UFUNCTION(BlueprintPure)
	FString GetMessage() const;

	UFUNCTION(BlueprintPure)
	ESentryLevel GetLevel() const;

public:
	USentryEvent();
};

FORCEINLINE uint32 GetTypeHash(const USentryEvent) { return 0; }
