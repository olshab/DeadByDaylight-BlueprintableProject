#pragma once

#include "CoreMinimal.h"
#include "ActorComponentChaseStartSignature.h"
#include "Components/ActorComponent.h"
#include "ActorComponentChaseEndSignature.h"
#include "UObject/NoExportTypes.h"
#include "CharacterChaseVisualComponent.generated.h"

class UMaterialHelperUnaffectedStaticMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterChaseVisualComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FActorComponentChaseStartSignature OnChaseStartEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FActorComponentChaseEndSignature OnChaseEndEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UMaterialHelperUnaffectedStaticMeshComponent* _vignetteMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _relativeLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _relativeScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FRotator _relativeRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fovModifyFactor;

public:
	UFUNCTION(BlueprintCallable)
	void OnAllChaseEnd();

public:
	UCharacterChaseVisualComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterChaseVisualComponent) { return 0; }
