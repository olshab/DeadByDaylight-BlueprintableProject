#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayElementAddition.h"
#include "GameplayElementSubstitutions.h"
#include "DependencyElementSubstitutions.h"
#include "OutOfWorldTileData.h"
#include "TileSubstitutions.h"
#include "DependencyElementAddition.h"
#include "EventSubstitionData.generated.h"

USTRUCT(BlueprintType)
struct FEventSubstitionData: public FDBDTableRowBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _allowSubstitutionInKYF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _baseNumOfSubstitutionPerGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FGameplayElementSubstitutions> _gameplaySubstitutionElements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDependencyElementSubstitutions> _dependencySubstitutionElements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTileSubstitutions _tileSubstitutions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FOutOfWorldTileData> _outOfWorldTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _eventTileSuffix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDependencyElementAddition> _dependencyElementAdditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FGameplayElementAddition> _gameplayElementAdditions;

public:
	DEADBYDAYLIGHT_API FEventSubstitionData();
};

FORCEINLINE uint32 GetTypeHash(const FEventSubstitionData) { return 0; }
