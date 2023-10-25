#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGLobbyOfferingWidget.generated.h"

class UCanvasPanel;
class UUMGLobbyOfferingItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLobbyOfferingWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* CanvasOffering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGLobbyOfferingItemWidget> LobbyOfferingItemClass;

public:
	UUMGLobbyOfferingWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLobbyOfferingWidget) { return 0; }
