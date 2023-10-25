#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniHandleParameter.generated.h"

class UHoudiniParameter;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniHandleParameter : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHoudiniParameter* AssetParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TupleIndex;

public:
	UHoudiniHandleParameter();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniHandleParameter) { return 0; }
