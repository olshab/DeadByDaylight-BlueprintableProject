#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K25AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK25AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isTeleporting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isPossessingGateway;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isSelectingGatewayLocation;

public:
	UK25AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK25AnimInstance) { return 0; }
