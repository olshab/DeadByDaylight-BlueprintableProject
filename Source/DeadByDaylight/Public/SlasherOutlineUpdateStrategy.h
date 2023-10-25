#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "OnRevealedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "SlasherOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnRevealedDelegate OnRevealed;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _nonRevealedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _revealedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _revealedColorForKiller;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	USlasherOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USlasherOutlineUpdateStrategy) { return 0; }
