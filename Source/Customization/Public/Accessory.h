#pragma once

#include "CoreMinimal.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "Accessory.generated.h"

class UActorComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class CUSTOMIZATION_API UAccessory : public UDBDSkeletalMeshComponentBudgeted
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldLoadOnServer;

public:
	UFUNCTION(BlueprintCallable)
	void BP_DestroyComponent(UActorComponent* componentToDestroy);

public:
	UAccessory();
};

FORCEINLINE uint32 GetTypeHash(const UAccessory) { return 0; }
