#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryScreamBehaviour.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryScreamBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldScreamOnCollect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldScreamOnAcquired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldScreamOnSynchronized;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Scream(ACamperPlayer* camper) const;

public:
	UCoreMemoryScreamBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryScreamBehaviour) { return 0; }
