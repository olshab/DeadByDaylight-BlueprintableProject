#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIController.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UUIController : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGFxObject* m_UIControllerObj;

public:
	UUIController();
};

FORCEINLINE uint32 GetTypeHash(const UUIController) { return 0; }
