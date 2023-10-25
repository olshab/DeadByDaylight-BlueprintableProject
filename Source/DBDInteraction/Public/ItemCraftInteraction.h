#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractionDefinition.h"
#include "ItemCraftInteraction.generated.h"

class ACollectable;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UItemCraftInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _attachToSocketName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ACollectable> _collectableClass;

public:
	UItemCraftInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UItemCraftInteraction) { return 0; }
