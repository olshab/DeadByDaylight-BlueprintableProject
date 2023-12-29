#pragma once

#include "CoreMinimal.h"
#include "InteractionEndedEvent.h"
#include "Interactable.h"
#include "IsInteractingChangedEvent.h"
#include "RespawnableInteractable.generated.h"

UCLASS(Blueprintable)
class SPECIALEVENTUTILITIES_API ARespawnableInteractable : public AInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FInteractionEndedEvent OnInteractionEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FIsInteractingChangedEvent OnIsInteractingChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsHidden, Transient)
	bool _isHidden;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnUnhidden();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsHidden();

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnHidden();

private:
	UFUNCTION(BlueprintPure)
	bool IsHidden() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ARespawnableInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ARespawnableInteractable) { return 0; }
