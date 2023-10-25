#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BloodOrbCollection.generated.h"

class ABloodOrb;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEONI_API UBloodOrbCollection : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ABloodOrb*> _bloodOrbs;

public:
	UBloodOrbCollection();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbCollection) { return 0; }
