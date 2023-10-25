#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "DailyRitualsPopupPresenter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDailyRitualsPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnRitualsSyncErrorEvent() const;

	UFUNCTION(BlueprintCallable)
	void OnRitualsFetchedEvent() const;

	UFUNCTION(BlueprintCallable)
	void OnRemoveRitual(const FString& id);

	UFUNCTION(BlueprintCallable)
	void OnClaimRitual(const FString& id);

	UFUNCTION(BlueprintCallable)
	void OnClaimAllRituals();

public:
	UDailyRitualsPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRitualsPopupPresenter) { return 0; }
