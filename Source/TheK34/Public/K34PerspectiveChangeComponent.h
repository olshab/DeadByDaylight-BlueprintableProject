#pragma once

#include "CoreMinimal.h"
#include "PlayerPerspectiveChangeComponent.h"
#include "PlayerPerspectiveChangeTargetData.h"
#include "K34PerspectiveChangeComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK34PerspectiveChangeComponent : public UPlayerPerspectiveChangeComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPlayerPerspectiveChangeTargetData _firstPersonYerkesPerspectiveChangeTargetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPlayerPerspectiveChangeTargetData _firstPersonDodsonPerspectiveChangeTargetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPlayerPerspectiveChangeTargetData _thirdPersonYerkesPerspectiveChangeTargetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _dodsonThirdPersonViewTransitionTime;

public:
	UK34PerspectiveChangeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34PerspectiveChangeComponent) { return 0; }
