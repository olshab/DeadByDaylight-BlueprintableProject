#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "KatsumoriTalisman.generated.h"

class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UKatsumoriTalisman : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _blockableWindows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _explosionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _blockDuration;

public:
	UKatsumoriTalisman();
};

FORCEINLINE uint32 GetTypeHash(const UKatsumoriTalisman) { return 0; }
