#pragma once

#include "CoreMinimal.h"
#include "AkAcousticSurface.generated.h"

USTRUCT(BlueprintType)
struct FAkAcousticSurface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Occlusion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

public:
	AKAUDIO_API FAkAcousticSurface();
};

FORCEINLINE uint32 GetTypeHash(const FAkAcousticSurface) { return 0; }
