#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERichPresenceUserType.h"
#include "ERichPresenceStatus.h"
#include "DBDRichPresenceSubsystem.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDRichPresenceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ERichPresenceUserType _userType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ERichPresenceStatus _richPresenceStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _timerRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _timerDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isValidSetup;

public:
	UDBDRichPresenceSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UDBDRichPresenceSubsystem) { return 0; }
