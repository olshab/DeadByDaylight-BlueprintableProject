#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "CustomizedHudPlayerWrapperIdMapContainer.h"
#include "EPlayerRole.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGPlayersStatusWidget.generated.h"

class UHorizontalBox;
class UUMGPlayerStatusIcon;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPlayersStatusWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EPlayerRole, FCustomizedHudPlayerWrapperIdMapContainer> CustomizedHudWrapperIdMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGPlayerStatusIcon> PlayerStatusIconClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHorizontalBox* playersContainer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FString, UUMGPlayerStatusIcon*> playerIconsByName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGPlayerStatusIcon*> _playerIcons;

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayerStatusClicked(UUMGPlayerStatusIcon* playerStatusIcon);

public:
	UUMGPlayersStatusWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPlayersStatusWidget) { return 0; }
