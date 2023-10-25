#pragma once

#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiPitchBend.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiPitchBend: public FAkMidiEventBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ValueLsb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ValueMsb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FullValue;

public:
	AKAUDIO_API FAkMidiPitchBend();
};

FORCEINLINE uint32 GetTypeHash(const FAkMidiPitchBend) { return 0; }
