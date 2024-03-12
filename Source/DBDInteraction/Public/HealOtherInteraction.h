#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HealInteraction.h"
#include "HealOtherInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UHealOtherInteraction : public UHealInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector SlashableRelativeLocationInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector SlashableRelativeLocationKO;

public:
	UHealOtherInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHealOtherInteraction) { return 0; }
