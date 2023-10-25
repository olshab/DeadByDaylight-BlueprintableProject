#pragma once

#include "CoreMinimal.h"
#include "BloodDecal.h"
#include "Components/ActorComponent.h"
#include "BloodTrailComponent.generated.h"

class UBloodTrailSettings;
class UBloodDecalEffect;
class UDBDDecalComponent;
class UDecalSpawner;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBloodTrailComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UBloodTrailSettings* _bloodTrailSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<UDBDDecalComponent*, FBloodDecal> _bloodDecals;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodDecalEffect* _bloodDecalEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDecalSpawner* _decalSpawner;

public:
	UFUNCTION(BlueprintCallable)
	void ConditionalStartBleeding();

public:
	UBloodTrailComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodTrailComponent) { return 0; }
