#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkSoundHudIcon.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UPerkSoundHudIcon : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PerkID;

public:
	UFUNCTION(BlueprintCallable)
	void ClearPerk();

	UFUNCTION(BlueprintCallable)
	void ActivatePerk(float percentage);

public:
	UPerkSoundHudIcon();
};

FORCEINLINE uint32 GetTypeHash(const UPerkSoundHudIcon) { return 0; }
