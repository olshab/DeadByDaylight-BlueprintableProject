#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "MapMeshToAkAudioEvent.generated.h"

class UStaticMesh;
class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FMapMeshToAkAudioEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UStaticMesh> Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDelayBetweenEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDelayBetweenObject;

public:
	DEADBYDAYLIGHT_API FMapMeshToAkAudioEvent();
};

FORCEINLINE uint32 GetTypeHash(const FMapMeshToAkAudioEvent) { return 0; }
