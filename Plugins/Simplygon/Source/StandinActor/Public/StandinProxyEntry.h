#pragma once

#include "CoreMinimal.h"
#include "UObject/LazyObjectPtr.h"
#include "StandinProxyEntry.generated.h"

class UTexture2D;
class UStaticMesh;
class AStandInMeshActor;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FStandinProxyEntry
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TLazyObjectPtr<AStandInMeshActor> StandinActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UStaticMesh* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UMaterialInterface* Material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<UTexture2D*> Textures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName Key;

public:
	STANDINACTOR_API FStandinProxyEntry();
};

FORCEINLINE uint32 GetTypeHash(const FStandinProxyEntry) { return 0; }
