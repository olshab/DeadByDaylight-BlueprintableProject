#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TunableStat.h"
#include "ShockTherapyAOEPreview.generated.h"

UCLASS(Blueprintable)
class AShockTherapyAOEPreview : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _baseWorldScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _shockTherapyRange;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAttackZonePreviewScale(const FVector& scale);

public:
	AShockTherapyAOEPreview();
};

FORCEINLINE uint32 GetTypeHash(const AShockTherapyAOEPreview) { return 0; }
