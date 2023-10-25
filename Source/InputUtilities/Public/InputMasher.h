#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputMasher.generated.h"

class UInputComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class INPUTUTILITIES_API UInputMasher : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInputComponent* _inputComponent;

public:
	UInputMasher();
};

FORCEINLINE uint32 GetTypeHash(const UInputMasher) { return 0; }
