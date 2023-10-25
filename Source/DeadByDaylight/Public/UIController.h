#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIController.generated.h"

class UMobileBaseUserWidget;
class UGFxObject;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UUIController : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGFxObject* m_UIControllerObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UMobileBaseUserWidget* _atlantaLoadingWidget;

public:
	UUIController();
};

FORCEINLINE uint32 GetTypeHash(const UUIController) { return 0; }
