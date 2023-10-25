#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DecalCollection.generated.h"

class UDecalMaskedMaterialsList;
class UStaticMeshComponent;
class UDBDDecalComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDecalCollection : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UDBDDecalComponent*> _decalComponentsArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UDBDDecalComponent*> _activeDecalComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UDBDDecalComponent*> _inactiveDecalComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<bool> _DeltaZPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UStaticMeshComponent*, int32> _deltaZMultipliers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDecalMaskedMaterialsList* _decalProperties;

public:
	UDecalCollection();
};

FORCEINLINE uint32 GetTypeHash(const UDecalCollection) { return 0; }
