#pragma once

#include "CoreMinimal.h"
#include "BaseStat.h"
#include "DBDTunableRowHandle.h"
#include "StatProperty.generated.h"

USTRUCT(BlueprintType)
struct FStatProperty: public FBaseStat
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useTunable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _nonTunableValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _tunableValue;

public:
	STATSYSTEM_API FStatProperty();
};

FORCEINLINE uint32 GetTypeHash(const FStatProperty) { return 0; }
