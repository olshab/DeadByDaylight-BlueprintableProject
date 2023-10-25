#pragma once

#include "CoreMinimal.h"
#include "ElementSubstitutions.h"
#include "SubstitutionElements.h"
#include "ETileSpawnPointType.h"
#include "DependencyElementSubstitutions.generated.h"

USTRUCT(BlueprintType)
struct FDependencyElementSubstitutions: public FElementSubstitutions
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FSubstitutionElements> _replacements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ETileSpawnPointType _type;

public:
	DEADBYDAYLIGHT_API FDependencyElementSubstitutions();
};

FORCEINLINE uint32 GetTypeHash(const FDependencyElementSubstitutions) { return 0; }
