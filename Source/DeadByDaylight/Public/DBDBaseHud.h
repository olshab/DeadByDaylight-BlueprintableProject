#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DBDBaseHud.generated.h"

class UFont;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API ADBDBaseHud : public AHUD
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UFont* _debugFont;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowAnimHudBP();

	UFUNCTION(BlueprintPure)
	bool ShouldDrawAnimHud() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ShowAnimHud(bool show);

public:
	ADBDBaseHud();
};

FORCEINLINE uint32 GetTypeHash(const ADBDBaseHud) { return 0; }
