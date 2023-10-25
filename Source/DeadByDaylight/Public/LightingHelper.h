#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightingHelper.generated.h"

class UPostProcessComponent;
class ABaseSky;
class ULightingFactory;
class AActor;
class UActorComponent;
class ULightingInterpolator;
class UTextureCube;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ULightingHelper : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ABaseSky* _levelLighting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ABaseSky* _levelLightingFixed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ABaseSky* _levelLightingSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ABaseSky* _levelLightingWithoutExposure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _adaptiveShadowMapControllersActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULightingInterpolator* _lightingInterpolator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULightingFactory* _lightingFactory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPostProcessComponent* _postProcessCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _bIsChangeCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FName _changeLightingThemeName;

public:
	UFUNCTION(BlueprintCallable)
	void ToggleLightingChange(bool bActivateLightingChange, FName themeName);

	UFUNCTION(BlueprintCallable)
	UTextureCube* GetTextureCube(FName mapTheme);

	UFUNCTION(BlueprintCallable)
	UClass* GetSourceLevelLightingClass();

	UFUNCTION(BlueprintCallable)
	UActorComponent* GetInitialComponentState(FName componentName);

	UFUNCTION(BlueprintCallable)
	AActor* GetASMController();

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ModifyExposure(float value);

public:
	ULightingHelper();
};

FORCEINLINE uint32 GetTypeHash(const ULightingHelper) { return 0; }
