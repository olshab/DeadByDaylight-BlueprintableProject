#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SurvivorCosmeticHelperActor.generated.h"

class UAkComponent;
class UCustomizedSkeletalMesh;
class ACamperPlayer;
class UMaterialHelper;

UCLASS(Blueprintable, Abstract)
class DBDCOSMETIC_API ASurvivorCosmeticHelperActor : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	bool IsLocallyObserved() const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetSurvivor() const;

	UFUNCTION(BlueprintPure)
	UMaterialHelper* GetMaterialHelper() const;

	UFUNCTION(BlueprintPure)
	UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh() const;

	UFUNCTION(BlueprintPure)
	UAkComponent* GetAudioComponent() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorLinked(ACamperPlayer* survivorLinked);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsLocallyObservingSurvivorChanged(bool isLocallyObservingSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsGettingMoriedStatusChanged(bool isGettingMoried);

public:
	ASurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const ASurvivorCosmeticHelperActor) { return 0; }
