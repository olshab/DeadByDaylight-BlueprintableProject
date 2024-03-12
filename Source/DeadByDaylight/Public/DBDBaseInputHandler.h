#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDBaseInputHandler.generated.h"

class USpringArmComponent;
class APawn;

UCLASS(Blueprintable)
class UDBDBaseInputHandler : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	APawn* _pawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	USpringArmComponent* _cameraBoom;

public:
	UDBDBaseInputHandler();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBaseInputHandler) { return 0; }
