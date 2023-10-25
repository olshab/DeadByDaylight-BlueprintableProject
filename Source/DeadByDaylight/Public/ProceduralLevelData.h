#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "GameFramework/Actor.h"
#include "GeneratedLevelData.h"
#include "ProceduralLevelData.generated.h"

class UPaperTileMap;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AProceduralLevelData : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UPaperTileMap> SelectedPaperMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GenerationSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGeneratedLevelData GeneratedData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Offerings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerksLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Perks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SkipGameplayElementGeneration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _builder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UClass* _builderClassDef;

public:
	AProceduralLevelData();
};

FORCEINLINE uint32 GetTypeHash(const AProceduralLevelData) { return 0; }
