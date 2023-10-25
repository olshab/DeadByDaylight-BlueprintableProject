#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionStarterComponent.generated.h"

class UInteractionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UInteractionStarterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _interaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ShouldStartInteraction, meta=(AllowPrivateAccess=true))
	bool _shouldStartInteraction;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ShouldStartInteraction();

	UFUNCTION(BlueprintCallable)
	void OnInteractionStarted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInteractionStarterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionStarterComponent) { return 0; }
