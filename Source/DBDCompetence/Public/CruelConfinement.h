#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "CruelConfinement.generated.h"

class UBlockableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UCruelConfinement : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _blockDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _windowAuraColor;

	UPROPERTY(EditAnywhere, Transient, Export)
	TArray<TWeakObjectPtr<UBlockableComponent>> _blockables;

public:
	UFUNCTION(BlueprintCallable)
	float GetBlockDurationAtLevel();

public:
	UCruelConfinement();
};

FORCEINLINE uint32 GetTypeHash(const UCruelConfinement) { return 0; }
