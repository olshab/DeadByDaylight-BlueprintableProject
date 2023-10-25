#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationAnimationSelector.generated.h"

class UDataTable;
class UCustomizedSkeletalMesh;

UCLASS(Blueprintable, EditInlineNew)
class DBDANIMATION_API UCustomizationAnimationSelector : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UDataTable* _customizationAnimationMappings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCustomizedSkeletalMesh* _customizedSkeletalMesh;

public:
	UCustomizationAnimationSelector();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationAnimationSelector) { return 0; }
