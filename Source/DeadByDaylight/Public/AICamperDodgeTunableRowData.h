#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAIDodgeType.h"
#include "EAIDodgeTechnique.h"
#include "AICamperDodgeTunableRowData.generated.h"

USTRUCT(BlueprintType)
struct FAICamperDodgeTunableRowData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAIDodgeType BestDodgeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EAIDodgeTechnique> DodgeTechniques;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RequireInSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RequireAttackState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReactionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackPlusSurvivorHalfWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FieldOfView;

public:
	DEADBYDAYLIGHT_API FAICamperDodgeTunableRowData();
};

FORCEINLINE uint32 GetTypeHash(const FAICamperDodgeTunableRowData) { return 0; }
