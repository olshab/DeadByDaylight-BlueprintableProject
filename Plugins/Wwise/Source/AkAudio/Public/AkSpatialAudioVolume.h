#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkSpatialAudioVolume.generated.h"

class UAkSurfaceReflectorSetComponent;
class UAkRoomComponent;
class UAkLateReverbComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAkLateReverbComponent* LateReverb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAkRoomComponent* Room;

public:
	AAkSpatialAudioVolume();
};

FORCEINLINE uint32 GetTypeHash(const AAkSpatialAudioVolume) { return 0; }
