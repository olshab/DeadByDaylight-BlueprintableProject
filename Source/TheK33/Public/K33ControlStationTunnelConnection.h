#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K33ControlStationTunnelConnection.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class THEK33_API AK33ControlStationTunnelConnection : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _tunnelConnectionMesh;

public:
	AK33ControlStationTunnelConnection();
};

FORCEINLINE uint32 GetTypeHash(const AK33ControlStationTunnelConnection) { return 0; }
