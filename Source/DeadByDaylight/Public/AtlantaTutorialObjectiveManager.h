#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaTutorialObjectiveManager.generated.h"

class UAtlantaObjectiveWidget;
class UVerticalBox;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAtlantaTutorialObjectiveManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UAtlantaObjectiveWidget*> _objectivesList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UVerticalBox* _objectivesContainer;

public:
	UAtlantaTutorialObjectiveManager();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaTutorialObjectiveManager) { return 0; }
