#pragma once

#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "BaseKillerAnimInstance.generated.h"

class ASlasherPlayer;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UBaseKillerAnimInstance : public UPlayerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASlasherPlayer* _owningKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _firstPersonView;

protected:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetOwningKiller() const;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ForceAnimPOV(const int32 animPOV);

public:
	UBaseKillerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBaseKillerAnimInstance) { return 0; }
