#pragma once

#include "CoreMinimal.h"
#include "Anniversary2021EventComponent.h"
#include "Templates/SubclassOf.h"
#include "Anniversary2023EventComponent.generated.h"

class ASpawnedPalletTracker;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UAnniversary2023EventComponent : public UAnniversary2021EventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ASpawnedPalletTracker> _fragilePalletTrackerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName EditorPalletAssetPathName;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UAnniversary2023EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAnniversary2023EventComponent) { return 0; }
