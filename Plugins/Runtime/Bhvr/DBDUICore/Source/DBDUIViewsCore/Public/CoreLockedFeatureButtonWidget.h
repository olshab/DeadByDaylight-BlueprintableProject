#pragma once

#include "CoreMinimal.h"
#include "LockedFeatureElementViewInterface.h"
#include "DBDFeatureLockProgress.h"
#include "CoreButtonWidget.h"
#include "EDBDFeatureType.h"
#include "CoreLockedFeatureButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLockedFeatureButtonWidget : public UCoreButtonWidget, public ILockedFeatureElementViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFeatureGatingEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDBDFeatureType _lockedFeatureType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDFeatureLockProgress _lockedFeatureData;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateLockedFeatureVisuals(bool isLockedFeature);

	UFUNCTION(BlueprintPure)
	bool HasValidLockedFeatureData() const;

public:
	UCoreLockedFeatureButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLockedFeatureButtonWidget) { return 0; }
