#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "FootstepCreatorComponent.generated.h"

class UCurveFloat;
class UFootstepManagerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFootstepCreatorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _fadeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _veinsCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UFootstepManagerComponent> _footstepManagerComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _secondsUntilFootprintTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _canSpawnFootstepsDefaultValue;

public:
	UFootstepCreatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFootstepCreatorComponent) { return 0; }
