#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "PlayerScoreEmitterData.generated.h"

class UPlayerScoreEmitter;

USTRUCT(BlueprintType)
struct FPlayerScoreEmitterData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTagQuery PawnSemanticTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UPlayerScoreEmitter> Emitter;

public:
	DEADBYDAYLIGHT_API FPlayerScoreEmitterData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerScoreEmitterData) { return 0; }
