#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PresetControllerSubsystem.generated.h"

class ULoadoutPresetController;
class UCustomizationPresetController;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UPresetControllerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULoadoutPresetController* _loadoutController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCustomizationPresetController* _customizationController;

public:
	UPresetControllerSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UPresetControllerSubsystem) { return 0; }
