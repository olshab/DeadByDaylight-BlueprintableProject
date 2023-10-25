#pragma once

#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "GameFramework/Actor.h"
#include "GeneratorEntity.generated.h"

class UMontagePlayer;
class AGenerator;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AGeneratorEntity : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _associatedGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMontagePlayer* _montagePlayer;

public:
	UFUNCTION(BlueprintCallable)
	void SetSkeletalMeshActive(bool active);

	UFUNCTION(BlueprintCallable)
	void SetAssociatedGenerator(AGenerator* generator);

	UFUNCTION(BlueprintCallable)
	void PlayMontage(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower);

	UFUNCTION(BlueprintPure)
	UMontagePlayer* GetMontagePlayer() const;

public:
	AGeneratorEntity();
};

FORCEINLINE uint32 GetTypeHash(const AGeneratorEntity) { return 0; }
