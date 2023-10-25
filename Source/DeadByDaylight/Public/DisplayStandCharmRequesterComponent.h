#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "DisplayStandCharmRequesterComponent.generated.h"

class ACharm;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisplayStandCharmRequesterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ACharm> _menuCharmClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnCharmDisplayed(AActor* actor);

public:
	UDisplayStandCharmRequesterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDisplayStandCharmRequesterComponent) { return 0; }
