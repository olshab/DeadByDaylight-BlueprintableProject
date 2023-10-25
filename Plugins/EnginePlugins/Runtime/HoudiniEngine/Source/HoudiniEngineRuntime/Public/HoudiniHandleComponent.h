#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EHoudiniHandleType.h"
#include "HoudiniHandleComponent.generated.h"

class UHoudiniHandleParameter;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniHandleComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniHandleParameter*> XformParms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UHoudiniHandleParameter* RSTParm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UHoudiniHandleParameter* RotOrderParm;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EHoudiniHandleType HandleType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString HandleName;

public:
	UHoudiniHandleComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniHandleComponent) { return 0; }
