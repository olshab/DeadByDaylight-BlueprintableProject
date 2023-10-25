#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomTransformation.generated.h"

USTRUCT(BlueprintType)
struct FCustomTransformation
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool UseCustomTransformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector2D CustomScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector2D CustomTranslation;

public:
	DBDSHAREDTYPES_API FCustomTransformation();
};

FORCEINLINE uint32 GetTypeHash(const FCustomTransformation) { return 0; }
