#pragma once

#include "CoreMinimal.h"
#include "K33SelectedControlStationOutlineFollower.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "K33TunnelBlockCosmetic.generated.h"

class USceneComponent;
class USplineComponent;
class AK33TunnelProceduralConnection;

UCLASS(Blueprintable)
class THEK33_API AK33TunnelBlockCosmetic : public AActor, public IK33SelectedControlStationOutlineFollower
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasTunnelExitTile;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USplineComponent* _splineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK33TunnelProceduralConnection> _tunnelProceduralConnectionClass;

	UPROPERTY(EditAnywhere)
	uint32 _numberOfConnectionActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _initialConnectionOffsetFromCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _endConnectionOffsetFromCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lengthBetweenSplinePoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rotationPerSplinePoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _firstSplinePointOffsetValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _secondSplinePointOffsetValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AK33TunnelProceduralConnection*> _tunnelProceduralConnections;

	UPROPERTY(EditAnywhere, Transient, Export)
	TArray<TWeakObjectPtr<USceneComponent>> _vfxPathLightsTransforms;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FVector GetExitTunnelLocation() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowTunnelBlockExit();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetTunnelExitAsBlocked(bool isBlocked);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTunnelBlockExitSelected(bool isSelected);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_EnableTunnelVFXPathLight(const FVector& location, const FRotator& rotation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DisableTunnelVFXPathLight();

public:
	AK33TunnelBlockCosmetic();
};

FORCEINLINE uint32 GetTypeHash(const AK33TunnelBlockCosmetic) { return 0; }
