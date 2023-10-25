#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "GlassStaticMesh.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGlassStaticMesh : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector defaultGlassNormalVector;

public:
	UGlassStaticMesh();
};

FORCEINLINE uint32 GetTypeHash(const UGlassStaticMesh) { return 0; }
