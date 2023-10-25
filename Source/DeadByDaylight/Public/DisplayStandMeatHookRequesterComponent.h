#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "DisplayStandMeatHookRequesterComponent.generated.h"

class AMenuMeatHook;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisplayStandMeatHookRequesterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AMenuMeatHook> _meatHookClass;

public:
	UDisplayStandMeatHookRequesterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDisplayStandMeatHookRequesterComponent) { return 0; }
