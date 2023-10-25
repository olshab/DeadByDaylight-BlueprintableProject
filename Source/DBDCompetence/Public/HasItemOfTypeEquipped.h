#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "ELoadoutItemType.h"
#include "HasItemOfTypeEquipped.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHasItemOfTypeEquipped : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELoadoutItemType _itemType;

public:
	UHasItemOfTypeEquipped();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemOfTypeEquipped) { return 0; }
