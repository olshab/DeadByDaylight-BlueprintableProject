#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Searchable.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Searchable : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter WantToKeepEmptyItemPenalty;

public:
	UBTService_FindInteractor_Searchable();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Searchable) { return 0; }
