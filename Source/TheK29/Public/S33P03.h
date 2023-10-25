#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S33P03.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US33P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _skillCheckTriggerPercentPerToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _skillCheckCursorSpeedPerToken;

	UPROPERTY(EditAnywhere)
	float _skillCheckBonusPercentPerToken;

public:
	UFUNCTION(BlueprintCallable)
	float GetSkillCheckTriggerPercentPerToken();

	UFUNCTION(BlueprintCallable)
	float GetSkillCheckCursorSpeedPerToken();

	UFUNCTION(BlueprintCallable)
	float GetSkillCheckBonusPercentPerTokenAtLevel();

public:
	US33P03();
};

FORCEINLINE uint32 GetTypeHash(const US33P03) { return 0; }
