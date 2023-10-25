#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniLandscapeOutputBakeType.h"
#include "UObject/SoftObjectPtr.h"
#include "HoudiniLandscapePtr.generated.h"

class ALandscapeProxy;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniLandscapePtr : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniLandscapeOutputBakeType BakeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EditLayerName;

public:
	UHoudiniLandscapePtr();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniLandscapePtr) { return 0; }
