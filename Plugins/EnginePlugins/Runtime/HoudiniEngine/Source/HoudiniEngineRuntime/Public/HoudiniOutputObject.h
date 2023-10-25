#pragma once

#include "CoreMinimal.h"
#include "HoudiniCurveOutputProperties.h"
#include "HoudiniOutputObject.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FHoudiniOutputObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* OutputObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* OutputComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* ProxyObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* ProxyComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bProxyIsCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsImplicit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsGeometryCollectionPiece;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GeometryCollectionPieceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BakeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHoudiniCurveOutputProperties CurveOutputProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> CachedAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> CachedTokens;

public:
	HOUDINIENGINERUNTIME_API FHoudiniOutputObject();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniOutputObject) { return 0; }
