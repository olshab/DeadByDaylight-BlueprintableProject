#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "K35P03.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	int32 _maxTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _tokenGain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cooldownTime;

public:
	UK35P03();
};

FORCEINLINE uint32 GetTypeHash(const UK35P03) { return 0; }
