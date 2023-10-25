#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "ArchivesVignettes.h"
#include "ArchivesJournal.generated.h"

USTRUCT(BlueprintType)
struct FArchivesJournal: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FArchivesVignettes> Vignettes;

public:
	DEADBYDAYLIGHT_API FArchivesJournal();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesJournal) { return 0; }
