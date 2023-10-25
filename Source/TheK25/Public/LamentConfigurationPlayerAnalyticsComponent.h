#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LamentConfigurationPlayerPossessionData.h"
#include "LamentConfigurationPlayerAnalyticsComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULamentConfigurationPlayerAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AnalyticsCount, meta=(AllowPrivateAccess=true))
	int32 _analyticsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FLamentConfigurationPlayerPossessionData _possessionAnalytics;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_AnalyticsCount();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULamentConfigurationPlayerAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULamentConfigurationPlayerAnalyticsComponent) { return 0; }
