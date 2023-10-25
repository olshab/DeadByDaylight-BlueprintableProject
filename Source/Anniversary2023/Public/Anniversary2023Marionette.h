#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarionetteMeshData.h"
#include "Templates/SubclassOf.h"
#include "Anniversary2023Marionette.generated.h"

class URespawnableComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANNIVERSARY2023_API AAnniversary2023Marionette : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	URespawnableComponent* _respawnableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* _dancerMask1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* _dancerMask2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rotationRate;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _playerTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _dancingCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FMarionetteMeshData> _potentialMarionetteMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<AActor>> _potentialMasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _maskLSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _maskRSocketName;

public:
	AAnniversary2023Marionette();
};

FORCEINLINE uint32 GetTypeHash(const AAnniversary2023Marionette) { return 0; }
