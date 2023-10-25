#pragma once

#include "CoreMinimal.h"
#include "LoadingImages.h"
#include "UObject/NoExportTypes.h"
#include "LoadingImagesDataProvider.generated.h"

class UDynamicContentHolder;

UCLASS(Blueprintable)
class DYNAMICCONTENT_API ULoadingImagesDataProvider : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FName, FLoadingImages> _cachedLoadingImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDynamicContentHolder* _owningDynamicContentHolder;

public:
	ULoadingImagesDataProvider();
};

FORCEINLINE uint32 GetTypeHash(const ULoadingImagesDataProvider) { return 0; }
