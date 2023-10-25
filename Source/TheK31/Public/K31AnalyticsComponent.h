#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31AnalyticsComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31AnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _analyticInspectionTime;

public:
	UK31AnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31AnalyticsComponent) { return 0; }
