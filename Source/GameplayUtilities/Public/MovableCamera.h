#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MovableCamera.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class GAMEPLAYUTILITIES_API AMovableCamera : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RequiresShiftModifierForInput;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	APlayerController* _playerController;

public:
	AMovableCamera();
};

FORCEINLINE uint32 GetTypeHash(const AMovableCamera) { return 0; }
