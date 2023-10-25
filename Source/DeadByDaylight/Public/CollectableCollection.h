#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CollectableCollection.generated.h"

class ACollectable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCollectableCollection : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACollectable*> _collectables;

public:
	UCollectableCollection();
};

FORCEINLINE uint32 GetTypeHash(const UCollectableCollection) { return 0; }
