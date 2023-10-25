#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterFolderList.generated.h"

class UHoudiniParameterFolder;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterFolderList : public UHoudiniParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsTabMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsTabsShown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniParameterFolder*> TabFolders;

public:
	UHoudiniParameterFolderList();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterFolderList) { return 0; }
