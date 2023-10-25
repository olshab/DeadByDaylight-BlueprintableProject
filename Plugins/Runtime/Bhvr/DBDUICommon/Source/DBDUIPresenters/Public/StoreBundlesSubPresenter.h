#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "Templates/SubclassOf.h"
#include "StoreBundlesSubPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreBundlesSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> StoreBundlesWidgetClass;

public:
	UStoreBundlesSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreBundlesSubPresenter) { return 0; }
