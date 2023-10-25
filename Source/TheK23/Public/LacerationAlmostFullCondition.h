#pragma once

#include "CoreMinimal.h"
#include "BaseLacerationLevelCondition.h"
#include "LacerationAlmostFullCondition.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class THEK23_API ULacerationAlmostFullCondition : public UBaseLacerationLevelCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _missingLacerationThreshold;

public:
	ULacerationAlmostFullCondition();
};

FORCEINLINE uint32 GetTypeHash(const ULacerationAlmostFullCondition) { return 0; }
