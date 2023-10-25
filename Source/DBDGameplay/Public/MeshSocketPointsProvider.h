#pragma once

#include "CoreMinimal.h"
#include "PointsProvider.h"
#include "Engine/EngineTypes.h"
#include "MeshSocketPointsProvider.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class DBDGAMEPLAY_API UMeshSocketPointsProvider : public UPointsProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FComponentReference _meshReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UMeshComponent* _mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FName> _sockets;

public:
	UMeshSocketPointsProvider();
};

FORCEINLINE uint32 GetTypeHash(const UMeshSocketPointsProvider) { return 0; }
