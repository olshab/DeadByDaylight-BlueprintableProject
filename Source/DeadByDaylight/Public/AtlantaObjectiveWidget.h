#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaObjectiveWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAtlantaObjectiveWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UTextBlock* ObjectiveLabel;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _totalFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _polynomialOrder;

public:
	UAtlantaObjectiveWidget();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaObjectiveWidget) { return 0; }
