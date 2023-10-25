#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "K26PowerOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26PowerOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _k26ProjectileOutlineColour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOutlineEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOnlyVisibleForKiller;

public:
	UFUNCTION(BlueprintCallable)
	void SetOutlineVisibility(bool isActive);

	UFUNCTION(BlueprintPure)
	bool IsOutlineVisible() const;

public:
	UK26PowerOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK26PowerOutlineUpdateStrategy) { return 0; }
