#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicGrass.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class ADynamicGrass : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UMaterialParameterCollection* _worldSettings;

public:
	ADynamicGrass();
};

FORCEINLINE uint32 GetTypeHash(const ADynamicGrass) { return 0; }
