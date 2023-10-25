#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "EHoudiniFolderParameterType.h"
#include "HoudiniParameterFolder.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterFolder : public UHoudiniParameter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EHoudiniFolderParameterType FolderType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bExpanded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bChosen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 ChildCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsContentShown;

public:
	UHoudiniParameterFolder();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterFolder) { return 0; }
