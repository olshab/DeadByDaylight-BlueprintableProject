#pragma once

#include "CoreMinimal.h"
#include "PointsProvider.h"
#include "Engine/EngineTypes.h"
#include "SceneComponentPointProvider.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew)
class DBDGAMEPLAY_API USceneComponentPointProvider : public UPointsProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FComponentReference _sceneReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _sceneComponent;

public:
	USceneComponentPointProvider();
};

FORCEINLINE uint32 GetTypeHash(const USceneComponentPointProvider) { return 0; }
