#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "SettingsViewInterface.h"
#include "SettingsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USettingsWidget : public UCoreBaseUserWidget, public ISettingsViewInterface
{
	GENERATED_BODY()

public:
	USettingsWidget();
};

FORCEINLINE uint32 GetTypeHash(const USettingsWidget) { return 0; }
