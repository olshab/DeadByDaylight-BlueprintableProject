#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractionDefinition.h"
#include "TrapKillerInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTrapKillerInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> _overridableInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _caughtFootRotationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _openNotifyID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _footSocketName;

public:
	UTrapKillerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UTrapKillerInteraction) { return 0; }
