#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseGroundDetectorComponent.generated.h"

class USkinnedMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UBaseGroundDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _startTransformName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TEnumAsByte<ECollisionChannel> _walkableCollisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _traceComplex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _extraTraceDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USkinnedMeshComponent* _skinnedMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _startSlopeTransformName;

public:
	UFUNCTION(BlueprintCallable)
	void InitSkinnedMeshComponent(USkinnedMeshComponent* mesh);

	UFUNCTION(BlueprintCallable)
	FVector GetGroundPosition(const FVector targetPos, const FVector extraOffset);

public:
	UBaseGroundDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBaseGroundDetectorComponent) { return 0; }
