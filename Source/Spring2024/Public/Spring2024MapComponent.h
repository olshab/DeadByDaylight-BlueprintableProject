#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "Spring2024MapComponent.generated.h"

class UStatusEffect;
class UBloodTrailSettings;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class USpring2024MapComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _spring2024MapStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UBloodTrailSettings* _bloodTrailSettings;

public:
	USpring2024MapComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpring2024MapComponent) { return 0; }
