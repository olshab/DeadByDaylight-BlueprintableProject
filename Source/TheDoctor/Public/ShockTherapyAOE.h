#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TunableStat.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ShockTherapyAOE.generated.h"

class USceneComponent;
class AShockTherapyAOEPreview;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AShockTherapyAOE : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _attackZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _rootComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _shockTherapyRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _killerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _baseZoneSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AShockTherapyAOEPreview> _shockTherapyPreviewClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AShockTherapyAOEPreview* _shockTherapyPreview;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTransform _previewTransform;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnScaleInitialized();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateShockTherapyAOE();

public:
	AShockTherapyAOE();
};

FORCEINLINE uint32 GetTypeHash(const AShockTherapyAOE) { return 0; }
