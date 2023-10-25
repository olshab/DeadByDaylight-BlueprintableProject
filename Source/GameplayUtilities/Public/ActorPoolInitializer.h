#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "ActorPoolInitializer.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UActorPoolInitializer : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _poolSize;

public:
	UActorPoolInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UActorPoolInitializer) { return 0; }
