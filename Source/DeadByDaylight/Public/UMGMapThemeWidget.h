#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGMapThemeWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGMapThemeWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetThemeName(const FString& themeName);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetMapName(const FString& mapName);

public:
	UUMGMapThemeWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMapThemeWidget) { return 0; }
