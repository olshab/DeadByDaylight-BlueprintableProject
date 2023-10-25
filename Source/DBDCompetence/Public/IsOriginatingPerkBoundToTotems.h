#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "EComparisonOperation.h"
#include "IsOriginatingPerkBoundToTotems.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsOriginatingPerkBoundToTotems : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	EComparisonOperation _comparisonOperator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TotemCount, meta=(AllowPrivateAccess=true))
	int32 _totemCount;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TotemCount();

public:
	UFUNCTION(BlueprintCallable)
	void Init(EComparisonOperation comparisonOperator, int32 totemCount);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIsOriginatingPerkBoundToTotems();
};

FORCEINLINE uint32 GetTypeHash(const UIsOriginatingPerkBoundToTotems) { return 0; }
