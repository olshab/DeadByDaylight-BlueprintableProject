#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "EPawnType.h"
#include "IsPawnType.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIsPawnType : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EPawnType _pawnType;

public:
	UIsPawnType();
};

FORCEINLINE uint32 GetTypeHash(const UIsPawnType) { return 0; }
