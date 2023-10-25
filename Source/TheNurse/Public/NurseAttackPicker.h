#pragma once

#include "CoreMinimal.h"
#include "SlasherAttackPickerComponent.h"
#include "NurseAttackPicker.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UNurseAttackPicker : public USlasherAttackPickerComponent
{
	GENERATED_BODY()

public:
	UNurseAttackPicker();
};

FORCEINLINE uint32 GetTypeHash(const UNurseAttackPicker) { return 0; }
