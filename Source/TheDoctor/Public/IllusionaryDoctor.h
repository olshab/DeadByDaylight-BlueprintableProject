#pragma once

#include "CoreMinimal.h"
#include "BaseHusk.h"
#include "UObject/NoExportTypes.h"
#include "IllusionaryDoctor.generated.h"

class UDBDOutlineComponent;

UCLASS(Blueprintable)
class AIllusionaryDoctor : public ABaseHusk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _dbdOutline;

public:
	UFUNCTION(BlueprintCallable)
	void DeactivateIllusion();

	UFUNCTION(BlueprintCallable)
	void ActivateIllusion(const FTransform& transform);

public:
	AIllusionaryDoctor();
};

FORCEINLINE uint32 GetTypeHash(const AIllusionaryDoctor) { return 0; }
