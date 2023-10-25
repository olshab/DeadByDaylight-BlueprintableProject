#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "EPlayerRole.h"
#include "ArchiveNodeDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArchiveNodeDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CinematicId;

public:
	DEADBYDAYLIGHT_API FArchiveNodeDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveNodeDefinition) { return 0; }
