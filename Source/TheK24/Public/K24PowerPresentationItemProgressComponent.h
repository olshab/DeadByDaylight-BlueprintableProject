#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K24PowerPresentationItemProgressComponent.generated.h"

class AK24Power;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK24PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK24Power* _k24Power;

public:
	UFUNCTION(BlueprintCallable)
	void SetK24Power(AK24Power* k24Power);

public:
	UK24PowerPresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK24PowerPresentationItemProgressComponent) { return 0; }
