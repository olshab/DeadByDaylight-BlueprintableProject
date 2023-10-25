#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Components/ActorComponent.h"
#include "PlayerScoreComponent.generated.h"

class UPlayerScoreEmitter;
class UDataTable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerScoreComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftObjectPtr<UDataTable> _scoreEmitterDB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<UPlayerScoreEmitter*> _emitters;

public:
	UPlayerScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerScoreComponent) { return 0; }
