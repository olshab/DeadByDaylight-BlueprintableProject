#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoopRepairTracker.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UCoopRepairTracker : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _coopRepairerHistory;

public:
	UFUNCTION(BlueprintCallable)
	void SetHasEverCoopRepaired(const ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	bool HasEverCoopRepaired(const ADBDPlayer* player) const;

public:
	UCoopRepairTracker();
};

FORCEINLINE uint32 GetTypeHash(const UCoopRepairTracker) { return 0; }
