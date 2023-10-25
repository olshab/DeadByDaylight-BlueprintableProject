#pragma once

#include "CoreMinimal.h"
#include "PointsProvider.h"
#include "Engine/EngineTypes.h"
#include "MultiSceneComponentPointProvider.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew)
class DBDGAMEPLAY_API UMultiSceneComponentPointProvider : public UPointsProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FComponentReference> _sceneReferences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USceneComponent*> _sceneComponents;

public:
	UMultiSceneComponentPointProvider();
};

FORCEINLINE uint32 GetTypeHash(const UMultiSceneComponentPointProvider) { return 0; }
