#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OriginalMaterials.h"
#include "UObject/NoExportTypes.h"
#include "FadeManager.generated.h"

class UDataTable;
class UActorComponent;
class UMeshComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AFadeManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UMeshComponent*> _meshComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDataTable* _fadeMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FOriginalMaterials> _fadedMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UActorComponent*> _excludedActors;

public:
	UFUNCTION(BlueprintCallable)
	void RemoveFadeMaterials(bool adjustAudioOcclusions);

	UFUNCTION(BlueprintCallable)
	void FadeAt(FVector Location, bool adjustAudioOcclusions);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_TurnCameraAroundPlayerWithFading(bool isTurning);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_FadeAtCurrentCameraLocation(bool isEnabled);

	UFUNCTION(BlueprintCallable)
	bool AreAnyMaterialsFaded();

public:
	AFadeManager();
};

FORCEINLINE uint32 GetTypeHash(const AFadeManager) { return 0; }
