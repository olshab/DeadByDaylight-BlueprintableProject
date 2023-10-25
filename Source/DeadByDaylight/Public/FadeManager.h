#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "GameFramework/Actor.h"
#include "OriginalMaterials.h"
#include "UObject/NoExportTypes.h"
#include "FadeManager.generated.h"

class UDataTable;
class UMaterialInterface;
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
	TMap<TSoftObjectPtr<UMaterialInterface>, TSoftObjectPtr<UMaterialInterface>> _originalToFade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<TSoftObjectPtr<UMaterialInterface>, TSoftObjectPtr<UMaterialInterface>> _fadeToOriginal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FOriginalMaterials> _fadedMeshes;

public:
	UFUNCTION(BlueprintCallable)
	void RemoveFadeMaterials();

	UFUNCTION(BlueprintCallable)
	void FadeAt(FVector CameraLocation);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ActivateFadeCamera(bool isActivated);

public:
	AFadeManager();
};

FORCEINLINE uint32 GetTypeHash(const AFadeManager) { return 0; }
