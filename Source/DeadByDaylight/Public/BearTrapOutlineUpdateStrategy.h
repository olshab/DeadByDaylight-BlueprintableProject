#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "BearTrapOutlineUpdateStrategy.generated.h"

class UMapActorComponent;
class UCurveLinearColor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBearTrapOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor UnrevealedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor RevealedColorToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveLinearColor* KillerOutlineFadeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UMapActorComponent* _owningBearTrapMapActorComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetOwningBearTrapMapActorComponent(UMapActorComponent* mapActorComponent);

public:
	UBearTrapOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBearTrapOutlineUpdateStrategy) { return 0; }
