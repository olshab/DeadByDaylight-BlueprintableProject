#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Poised.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UPoised : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _activationTime;

public:
	UFUNCTION(BlueprintPure)
	float GetActivationTime() const;

public:
	UPoised();
};

FORCEINLINE uint32 GetTypeHash(const UPoised) { return 0; }
