#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ContextEventData.generated.h"

USTRUCT(BlueprintType)
struct FContextEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ContextGroupName;

	UPROPERTY(EditAnywhere, Transient)
	uint32 ContextGroupUid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PreviousContextName;

	UPROPERTY(EditAnywhere, Transient)
	uint32 PreviousContextUid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CurrentContextName;

	UPROPERTY(EditAnywhere, Transient)
	uint32 CurrentContextUid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString NextContextName;

	UPROPERTY(EditAnywhere, Transient)
	uint32 NextContextUid;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime Timestamp;

public:
	DEADBYDAYLIGHT_API FContextEventData();
};

FORCEINLINE uint32 GetTypeHash(const FContextEventData) { return 0; }
