#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K26ProjectileStateDetails.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FK26ProjectileStateDetails
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle VisualScaleX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle VisualScaleY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle VisualScaleZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle HitboxScaleX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle HitboxScaleY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle HitboxScaleZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* HitBoxStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DebugColor;

public:
	THEK26_API FK26ProjectileStateDetails();
};

FORCEINLINE uint32 GetTypeHash(const FK26ProjectileStateDetails) { return 0; }
