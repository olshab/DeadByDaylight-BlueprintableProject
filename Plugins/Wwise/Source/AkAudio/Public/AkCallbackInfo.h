#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkCallbackInfo.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class AKAUDIO_API UAkCallbackInfo : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAkComponent* AkComponent;

public:
	UAkCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkCallbackInfo) { return 0; }
