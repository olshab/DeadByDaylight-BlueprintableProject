#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "SocketOrBoneCache.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSocketOrBoneCache
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftObjectPtr<UAnimSequence> _sourceAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _socketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _notifyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FRotator _rotation;

public:
	ANIMATIONUTILITIES_API FSocketOrBoneCache();
};

FORCEINLINE uint32 GetTypeHash(const FSocketOrBoneCache) { return 0; }
