#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EventSpawnablePositionDropdown.h"
#include "UObject/NoExportTypes.h"
#include "EventSpawnableComponent.generated.h"

class UBoxComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventSpawnableComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEventSpawnablePositionDropdown> SpawnPositionPreferences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Bound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BudgetOverride;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _boundBox;

public:
	UEventSpawnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEventSpawnableComponent) { return 0; }
