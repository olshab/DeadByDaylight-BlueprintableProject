#pragma once

#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniStaticMeshComponent.generated.h"

class UHoudiniStaticMesh;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniStaticMeshComponent : public UMeshComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UHoudiniStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBox LocalBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHoudiniIconVisible;

public:
	UFUNCTION(BlueprintCallable)
	void SetMesh(UHoudiniStaticMesh* InMesh);

	UFUNCTION(BlueprintCallable)
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible);

	UFUNCTION(BlueprintCallable)
	void NotifyMeshUpdated();

	UFUNCTION(BlueprintCallable)
	bool IsHoudiniIconVisible() const;

	UFUNCTION(BlueprintCallable)
	UHoudiniStaticMesh* GetMesh();

public:
	UHoudiniStaticMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniStaticMeshComponent) { return 0; }
