#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArrayOfATile.h"
#include "QuadrantInfo.h"
#include "ArrayOfInt32.h"
#include "TileMatrix.generated.h"

class ATile;
class AActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UTileMatrix : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FArrayOfATile> _matrix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ATile*> _tiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ATile*> _extraTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _basementActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FQuadrantInfo> _quadInfoArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FArrayOfInt32> _quadIndexMatrix;

public:
	UTileMatrix();
};

FORCEINLINE uint32 GetTypeHash(const UTileMatrix) { return 0; }
