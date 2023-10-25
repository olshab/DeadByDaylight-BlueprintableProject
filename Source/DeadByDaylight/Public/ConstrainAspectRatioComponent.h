#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ConstrainAspectRatioComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UConstrainAspectRatioComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetCinematicMode(bool cinematicMode);

private:
	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

public:
	UFUNCTION(BlueprintPure)
	FIntPoint GetCameraConstrainedViewSize() const;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ToggleBlackBars(int32 option);

public:
	UConstrainAspectRatioComponent();
};

FORCEINLINE uint32 GetTypeHash(const UConstrainAspectRatioComponent) { return 0; }
