#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ToastButton.h"
#include "UObject/SoftObjectPtr.h"
#include "EToastInputType.h"
#include "Toast.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FToast: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisplayDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Lifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ToastText;

	UPROPERTY(EditAnywhere)
	TMap<EToastInputType, FToastButton> ButtonsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DelayBeforeInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> ToastIcon;

public:
	DEADBYDAYLIGHT_API FToast();
};

FORCEINLINE uint32 GetTypeHash(const FToast) { return 0; }
