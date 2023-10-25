#pragma once

#include "CoreMinimal.h"
#include "DisplayStand.h"
#include "EAtlantaDisplayStandPosition.h"
#include "AtlantaDisplayStand.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AAtlantaDisplayStand : public ADisplayStand
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAtlantaDisplayStandPosition StandPosition;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* SurvivorPositionMarker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* KillerPositionMarker;

public:
	AAtlantaDisplayStand();
};

FORCEINLINE uint32 GetTypeHash(const AAtlantaDisplayStand) { return 0; }
