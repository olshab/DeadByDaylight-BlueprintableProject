#pragma once

#include "CoreMinimal.h"
#include "StandDisplayable.h"
#include "CharmAttachable.h"
#include "CharmIdSlot.h"
#include "GameFramework/Actor.h"
#include "MenuMeatHook.generated.h"

class UCharmSpawnerComponent;

UCLASS(Blueprintable)
class AMenuMeatHook : public AActor, public IStandDisplayable, public ICharmAttachable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharmSpawnerComponent* _charmSpawnerComponent;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCharmsUpdated(const TArray<FCharmIdSlot>& charmIDs);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BeginDestroySequence_Internal();

public:
	AMenuMeatHook();
};

FORCEINLINE uint32 GetTypeHash(const AMenuMeatHook) { return 0; }
