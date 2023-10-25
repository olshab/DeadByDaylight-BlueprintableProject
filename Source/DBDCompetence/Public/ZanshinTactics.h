#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ZanshinTactics.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UZanshinTactics : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _coolDownDuration;

public:
	UZanshinTactics();
};

FORCEINLINE uint32 GetTypeHash(const UZanshinTactics) { return 0; }
