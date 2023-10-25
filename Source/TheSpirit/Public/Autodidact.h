#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Autodidact.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAutodidact : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	int32 _maxTokenCountPerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _progressionBonusPerToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _initialSkillCheckProgressionPenalty;

public:
	UAutodidact();
};

FORCEINLINE uint32 GetTypeHash(const UAutodidact) { return 0; }
