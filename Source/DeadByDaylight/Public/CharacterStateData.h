#pragma once

#include "CoreMinimal.h"
#include "CharacterStateData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStateData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _pips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _powerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FName> _addonIds;

public:
	DEADBYDAYLIGHT_API FCharacterStateData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterStateData) { return 0; }
