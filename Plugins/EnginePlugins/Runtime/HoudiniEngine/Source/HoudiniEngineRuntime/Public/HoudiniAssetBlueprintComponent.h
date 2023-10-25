#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniAssetComponent.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniAssetBlueprintComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FauxBPProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHoudiniAssetChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	bool bUpdatedFromTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInBlueprintEditor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	bool bCanDeleteHoudiniNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	bool bHasRegisteredComponentTemplate;

	UPROPERTY(EditAnywhere)
	TMap<FHoudiniOutputObjectIdentifier, FGuid> CachedOutputNodes;

	UPROPERTY(EditAnywhere)
	TMap<FGuid, FGuid> CachedInputNodes;

public:
	UFUNCTION(BlueprintCallable)
	void SetToggleValueAt(const FString& Name, bool Value, int32 Index);

	UFUNCTION(BlueprintCallable)
	void SetFloatParameter(const FString& Name, float Value, int32 Index);

	UFUNCTION(BlueprintCallable)
	bool HasParameter(const FString& Name);

public:
	UHoudiniAssetBlueprintComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetBlueprintComponent) { return 0; }
