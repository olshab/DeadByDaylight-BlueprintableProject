#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "TunableStat.h"
#include "UObject/NoExportTypes.h"
#include "TelevisionOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTelevisionOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _distanceToRevealAura;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _survivorAuraNearColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _survivorAuraTapeTargetColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _slasherPoweredColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _revealedByMapColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _slasherUnpoweredDefaultColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _slasherUnpoweredVisibleColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _slasherTeleportTargetColor;

public:
	UTelevisionOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTelevisionOutlineUpdateStrategy) { return 0; }
