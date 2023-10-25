#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitValidationConfigsComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHitValidationConfigsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_PrintInGameHitValidationConfigs();

public:
	UHitValidationConfigsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHitValidationConfigsComponent) { return 0; }
