#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "ScreamSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UScreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _screamTrigger;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetScreamTrigger();

public:
	UScreamSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UScreamSurvivorSubAnimInstance) { return 0; }
