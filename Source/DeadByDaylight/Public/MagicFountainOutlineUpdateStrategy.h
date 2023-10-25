#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "MagicFountainOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMagicFountainOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _outlineColor;

public:
	UFUNCTION(BlueprintCallable)
	void SetFountainCorrupted(const bool corrupted);

public:
	UMagicFountainOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UMagicFountainOutlineUpdateStrategy) { return 0; }
