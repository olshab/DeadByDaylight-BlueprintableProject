#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ManifestationPerk.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UManifestationPerk : public UPerk
{
	GENERATED_BODY()

public:
	UManifestationPerk();
};

FORCEINLINE uint32 GetTypeHash(const UManifestationPerk) { return 0; }
