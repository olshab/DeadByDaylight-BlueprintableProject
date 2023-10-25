#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AchievementHandler.generated.h"

class UAchievementBase;

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UAchievementHandler : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UAchievementBase*> _achievements;

public:
	UAchievementHandler();
};

FORCEINLINE uint32 GetTypeHash(const UAchievementHandler) { return 0; }
