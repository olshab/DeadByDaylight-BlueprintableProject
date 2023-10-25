#pragma once

#include "CoreMinimal.h"
#include "Loadout.generated.h"

USTRUCT(BlueprintType)
struct FLoadout
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName offering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName addon1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName addon2;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FName> _perks;

public:
	SOCIALPARTY_API FLoadout();
};

FORCEINLINE uint32 GetTypeHash(const FLoadout) { return 0; }
