#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SpiesFromTheShadows.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpiesFromTheShadows : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _cooldownDurationSecs;

public:
	UFUNCTION(BlueprintPure)
	float GetCooldownDuration() const;

public:
	USpiesFromTheShadows();
};

FORCEINLINE uint32 GetTypeHash(const USpiesFromTheShadows) { return 0; }
