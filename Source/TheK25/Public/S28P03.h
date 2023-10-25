#pragma once

#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "S28P03.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US28P03 : public UBoonPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _lingerDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetLingerDurationAtLevel() const;

public:
	US28P03();
};

FORCEINLINE uint32 GetTypeHash(const US28P03) { return 0; }
