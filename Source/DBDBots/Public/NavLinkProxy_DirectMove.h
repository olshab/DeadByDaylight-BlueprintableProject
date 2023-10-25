#pragma once

#include "CoreMinimal.h"
#include "NavLinkProxy_Base.h"
#include "UObject/NoExportTypes.h"
#include "NavLinkProxy_DirectMove.generated.h"

class ADBDPlayer;
class UNavMovePath;

UCLASS(Blueprintable)
class DBDBOTS_API ANavLinkProxy_DirectMove : public ANavLinkProxy_Base
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> CustomPathPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveToPathPointTimeLimit;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, UNavMovePath*> _playersOnPath;

private:
	UFUNCTION(BlueprintCallable)
	void OnDisplayDebugInfo();

public:
	ANavLinkProxy_DirectMove();
};

FORCEINLINE uint32 GetTypeHash(const ANavLinkProxy_DirectMove) { return 0; }
