#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "MeatHookOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMeatHookOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor HookedOutlineColorSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor CarryingOutlineColorSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor DefaultOutlineColorSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor VisibleOutlineColorCamper;

private:
	UFUNCTION(BlueprintCallable)
	void Local_AddBasementOfferingReveal();

	UFUNCTION(BlueprintCallable)
	void Authority_AddBasementHookToPlayerMapItem();

public:
	UMeatHookOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UMeatHookOutlineUpdateStrategy) { return 0; }
