#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "DemogorgonPower.generated.h"

class AActor;

UCLASS(Blueprintable)
class ADemogorgonPower : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _demogorgonHuskClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _demogorgonHusk;

public:
	ADemogorgonPower();
};

FORCEINLINE uint32 GetTypeHash(const ADemogorgonPower) { return 0; }
