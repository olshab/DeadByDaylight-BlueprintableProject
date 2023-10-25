#pragma once

#include "CoreMinimal.h"
#include "PostAttackData.generated.h"

USTRUCT(BlueprintType)
struct FPostAttackData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOblivious;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsKO;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsExposed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPostPhaseWalkAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDownedInDemonMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLegionBleedOutAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDemogorgonPounceAttack;

public:
	DEADBYDAYLIGHT_API FPostAttackData();
};

FORCEINLINE uint32 GetTypeHash(const FPostAttackData) { return 0; }
