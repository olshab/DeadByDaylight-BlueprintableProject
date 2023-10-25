#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDActorIndicator.generated.h"

UCLASS(Blueprintable, Abstract)
class DBDCOSMETIC_API ADBDActorIndicator : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActivated;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateIndicatorActivationStatus(const bool isActivated);

public:
	ADBDActorIndicator();
};

FORCEINLINE uint32 GetTypeHash(const ADBDActorIndicator) { return 0; }
