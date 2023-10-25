#pragma once

#include "CoreMinimal.h"
#include "PlayerScoreEmitter.h"
#include "GameplayTagContainer.h"
#include "PlayerStateScoreEmitter.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UPlayerStateScoreEmitter : public UPlayerScoreEmitter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _scoreUpdateInterval;

	UPROPERTY(EditAnywhere)
	FGameplayTagQuery _tagQuery;

public:
	UPlayerStateScoreEmitter();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerStateScoreEmitter) { return 0; }
