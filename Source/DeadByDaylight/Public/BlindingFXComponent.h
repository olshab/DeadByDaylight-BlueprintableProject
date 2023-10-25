#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlindingFXComponent.generated.h"

class UPostProcessComponent;
class UMaterialInstanceDynamic;
class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlindingFXComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _blindnessIntensityParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _blindnessMaterialCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _blindnessCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPostProcessComponent* _postProcess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _postProcessMaterial;

public:
	UFUNCTION(BlueprintCallable)
	void SetPostProcessMaterial(UMaterialInstanceDynamic* value);

	UFUNCTION(BlueprintCallable)
	void SetPostProcess(UPostProcessComponent* value);

public:
	UBlindingFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlindingFXComponent) { return 0; }
