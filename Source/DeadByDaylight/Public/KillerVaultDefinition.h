#pragma once

#include "CoreMinimal.h"
#include "VaultDefinition.h"
#include "StatProperty.h"
#include "KillerVaultDefinition.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerVaultDefinition : public UVaultDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldUseCustomDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStatProperty _vaultDuration;

public:
	UKillerVaultDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UKillerVaultDefinition) { return 0; }
