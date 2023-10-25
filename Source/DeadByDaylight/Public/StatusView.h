#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StatusViewSource.h"
#include "StatusView.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class AStatusView : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _percentageFill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isClockwiseTimer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _localDBDPlayer;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ResetView(const ADBDPlayer* dbdPlayer);

	UFUNCTION(BlueprintCallable)
	void FireNotification(const FStatusViewSource statusViewSource);

public:
	AStatusView();
};

FORCEINLINE uint32 GetTypeHash(const AStatusView) { return 0; }
