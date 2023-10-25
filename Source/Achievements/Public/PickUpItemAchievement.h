#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "EPlayerRole.h"
#include "PickUpItemAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UPickUpItemAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _statName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _triggerOnNormalItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _triggerOnSpecialItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _triggerOnCursedItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EPlayerRole _targetPlayerRole;

public:
	UPickUpItemAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UPickUpItemAchievement) { return 0; }
