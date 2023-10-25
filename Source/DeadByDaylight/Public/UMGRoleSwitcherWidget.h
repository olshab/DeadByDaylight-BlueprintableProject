#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGRoleSwitcherWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRoleSwitcherWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCurrentRoleRoleSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _touchDeltaTolerance;

public:
	UUMGRoleSwitcherWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRoleSwitcherWidget) { return 0; }
