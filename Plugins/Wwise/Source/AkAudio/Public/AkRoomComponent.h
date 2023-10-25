#pragma once

#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "AkRoomComponent.generated.h"

class UAkAcousticTextureSetComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkRoomComponent : public UAkGameObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WallOcclusion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AuxSendLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoPost;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAkAcousticTextureSetComponent* GeometryComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent);

	UFUNCTION(BlueprintPure)
	UPrimitiveComponent* GetPrimitiveParent() const;

public:
	UAkRoomComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkRoomComponent) { return 0; }
