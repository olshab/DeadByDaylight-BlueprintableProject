#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseVFX.generated.h"

UCLASS(Blueprintable)
class VFXUTILITIES_API ABaseVFX : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldLoadOnServer;

public:
	ABaseVFX();
};

FORCEINLINE uint32 GetTypeHash(const ABaseVFX) { return 0; }
