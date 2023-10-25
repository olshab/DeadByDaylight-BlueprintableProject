#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DisplayStandCurrencyRequesterComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisplayStandCurrencyRequesterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UClass* _menuCurrencyDisplayableClass;

public:
	UDisplayStandCurrencyRequesterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDisplayStandCurrencyRequesterComponent) { return 0; }
