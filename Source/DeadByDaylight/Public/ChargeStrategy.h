#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChargeStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UChargeStrategy : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldApplyRedirectedChargeNormally;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldBroadcastChargeApplied;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldApplyModifiersToRedirectedCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldAllowChargeFromItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldRedirectSkillcheckChargePenalty;

public:
	UChargeStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UChargeStrategy) { return 0; }
