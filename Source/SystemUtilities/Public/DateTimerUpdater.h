#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DateTimerArray.h"
#include "DateTimerUpdater.generated.h"

class UDateTimeProvider;

UCLASS(Blueprintable)
class SYSTEMUTILITIES_API UDateTimerUpdater : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<TSubclassOf<UDateTimeProvider>, FDateTimerArray> _timers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<TSubclassOf<UDateTimeProvider>, UDateTimeProvider*> _dateTimeProvider;

public:
	UDateTimerUpdater();
};

FORCEINLINE uint32 GetTypeHash(const UDateTimerUpdater) { return 0; }
