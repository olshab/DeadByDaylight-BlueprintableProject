#pragma once

#include "CoreMinimal.h"
#include "SlasherAttackPickerComponent.h"
#include "GhostFaceAttackPicker.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGhostFaceAttackPicker : public USlasherAttackPickerComponent
{
	GENERATED_BODY()

public:
	UGhostFaceAttackPicker();
};

FORCEINLINE uint32 GetTypeHash(const UGhostFaceAttackPicker) { return 0; }
