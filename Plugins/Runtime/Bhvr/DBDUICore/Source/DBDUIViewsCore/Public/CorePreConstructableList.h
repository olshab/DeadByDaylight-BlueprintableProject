#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CorePreConstructableList.generated.h"

class UCoreBaseUserWidget;
class UPanelWidget;

UCLASS(Blueprintable)
class DBDUIVIEWSCORE_API UCorePreConstructableList : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCoreBaseUserWidget* _owningObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreBaseUserWidget*> _widgetList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreBaseUserWidget*> _shownWidgetList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSubclassOf<UCoreBaseUserWidget> _userWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPanelWidget* _container;

public:
	UCorePreConstructableList();
};

FORCEINLINE uint32 GetTypeHash(const UCorePreConstructableList) { return 0; }
