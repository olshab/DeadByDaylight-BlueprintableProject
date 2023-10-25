#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "BaseLockerItem.generated.h"

class ALocker;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ABaseLockerItem : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OwningLocker, Transient)
	ALocker* _owningLocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _adjustedRelativePosition;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_OwningLocker();

private:
	UFUNCTION(BlueprintCallable)
	void AdjustPositionOnLocker();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABaseLockerItem();
};

FORCEINLINE uint32 GetTypeHash(const ABaseLockerItem) { return 0; }
