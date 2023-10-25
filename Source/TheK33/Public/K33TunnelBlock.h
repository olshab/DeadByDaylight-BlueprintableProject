#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "K33TunnelBlock.generated.h"

class USceneComponent;
class UK33TunnelBlockCosmeticActorSpawner;
class AK33TunnelBlockCosmetic;

UCLASS(Blueprintable)
class AK33TunnelBlock : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK33TunnelBlockCosmeticActorSpawner* _cosmeticActorSpawner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK33TunnelBlockCosmetic* _tunnelCosmeticActor;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FRotator GetExitTunnelInteractableSpawnRotation() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FVector GetExitTunnelInteractableSpawnLocation() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FVector GetEnterTunnelTeleportLocation() const;

public:
	AK33TunnelBlock();
};

FORCEINLINE uint32 GetTypeHash(const AK33TunnelBlock) { return 0; }
