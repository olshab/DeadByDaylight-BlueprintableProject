#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ECharacterMovementTypes.h"
#include "BTService_SetMovementConversion.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_SetMovementConversion : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterMovementTypes FromMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterMovementTypes ToMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ApplyOrder;

public:
	UBTService_SetMovementConversion();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_SetMovementConversion) { return 0; }
