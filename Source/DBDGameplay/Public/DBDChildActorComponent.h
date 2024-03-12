#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "DBDChildActorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UDBDChildActorComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> _childActorToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _socketNameToAttach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentRule _attachmentLocationRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentRule _attachmentRotationRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentRule _attachmentScaleRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _weldSimulatedBodies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform _childActorTransformOnSpawn;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AActor* _childActor;

public:
	UDBDChildActorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDChildActorComponent) { return 0; }
