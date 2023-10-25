#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ButtonPressTracker.generated.h"

class UPlayerInput;
class UInputComponent;

UCLASS(Blueprintable)
class UButtonPressTracker : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient, Export)
	TWeakObjectPtr<UInputComponent> _trackedInputComponent;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UPlayerInput> _playerInput;

public:
	UButtonPressTracker();
};

FORCEINLINE uint32 GetTypeHash(const UButtonPressTracker) { return 0; }
