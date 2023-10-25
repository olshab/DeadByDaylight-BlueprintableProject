#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindCollectable.h"
#include "AISkill_FindCollectable_Searchable.generated.h"

class ASearchable;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindCollectable_Searchable : public UAISkill_FindCollectable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SearchIntervalAfterOpenSearchable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OpenSearchableRelevancyDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASearchable* _relevantSearchable;

public:
	UAISkill_FindCollectable_Searchable();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable_Searchable) { return 0; }
