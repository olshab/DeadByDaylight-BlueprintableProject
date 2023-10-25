#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkLateReverbComponent.generated.h"

class UAkAuxBus;
class UAkAcousticTextureSetComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkLateReverbComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SendLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoAssignAuxBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAuxBus* AuxBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AuxBusName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAkAuxBus* AuxBusManual;

public:
	UFUNCTION(BlueprintCallable)
	void AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent);

public:
	UAkLateReverbComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkLateReverbComponent) { return 0; }
