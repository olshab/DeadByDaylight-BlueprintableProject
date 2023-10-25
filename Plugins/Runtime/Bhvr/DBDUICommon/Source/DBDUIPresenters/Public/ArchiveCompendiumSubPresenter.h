#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ArchiveCompendiumSubPresenter.generated.h"

class IArchiveCompendiumViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UArchiveCompendiumSubPresenter : public USubPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TScriptInterface<IArchiveCompendiumViewInterface> _archiveCompendiumWidget;

protected:
	UFUNCTION(BlueprintCallable)
	void OnTomeSelected(const FString& tomeId);

public:
	UArchiveCompendiumSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveCompendiumSubPresenter) { return 0; }
