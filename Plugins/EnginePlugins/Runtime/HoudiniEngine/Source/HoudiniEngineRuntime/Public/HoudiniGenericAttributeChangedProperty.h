#pragma once

#include "CoreMinimal.h"
#include "HoudiniGenericAttributeChangedProperty.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FHoudiniGenericAttributeChangedProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* Object;

public:
	HOUDINIENGINERUNTIME_API FHoudiniGenericAttributeChangedProperty();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniGenericAttributeChangedProperty) { return 0; }
