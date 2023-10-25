#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UITweenMaterialVectorProperties.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UITWEEN_API UUITweenMaterialVectorProperties : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UMaterialInstanceDynamic* MaterialInstance;

public:
	UUITweenMaterialVectorProperties();
};

FORCEINLINE uint32 GetTypeHash(const UUITweenMaterialVectorProperties) { return 0; }
