#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "UObject/NoExportTypes.h"
#include "Addon_K24_04.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K24_04 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _effectTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor outlineColor;

public:
	UAddon_K24_04();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K24_04) { return 0; }
