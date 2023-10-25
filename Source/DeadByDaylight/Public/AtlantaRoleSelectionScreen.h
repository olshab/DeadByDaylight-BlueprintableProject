#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaRoleSelectionScreen.generated.h"

class UUMGRoleSelectionScreen;

UCLASS(Blueprintable)
class UAtlantaRoleSelectionScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UUMGRoleSelectionScreen* _umgScreen;

public:
	UAtlantaRoleSelectionScreen();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaRoleSelectionScreen) { return 0; }
