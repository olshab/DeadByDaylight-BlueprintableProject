#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "PawnObserver.generated.h"

class AController;
class APawn;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UPawnObserver : public UUIComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnPawnControllerSet(APawn* pawn, AController* oldController, AController* newController);

public:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

public:
	UPawnObserver();
};

FORCEINLINE uint32 GetTypeHash(const UPawnObserver) { return 0; }
