#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GnomePlayerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGnomePlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _hasInteractedWithGnomeThisGame;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGnomePlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGnomePlayerComponent) { return 0; }
