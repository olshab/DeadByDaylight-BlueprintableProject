#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SignificanceManagerComponent.generated.h"

class USignificanceStrategy;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SIGNIFICANCEUTILITIES_API USignificanceManagerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USignificanceStrategy* _significanceStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _dependentActorsToCheckSignficance;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USignificanceManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USignificanceManagerComponent) { return 0; }
