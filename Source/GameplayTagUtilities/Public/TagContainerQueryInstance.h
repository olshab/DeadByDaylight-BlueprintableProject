#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "TagContainerQueryInstance.generated.h"

UCLASS(Blueprintable)
class UTagContainerQueryInstance : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTagQuery Query;

public:
	UTagContainerQueryInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTagContainerQueryInstance) { return 0; }
