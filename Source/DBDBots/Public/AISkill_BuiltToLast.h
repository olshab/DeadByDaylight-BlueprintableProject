#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "DataTableDropdown.h"
#include "AISkill_BuiltToLast.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_BuiltToLast : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown PerkID;

public:
	UAISkill_BuiltToLast();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_BuiltToLast) { return 0; }
