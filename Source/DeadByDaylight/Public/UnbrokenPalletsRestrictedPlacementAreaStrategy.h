#pragma once

#include "CoreMinimal.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "UnbrokenPalletsRestrictedPlacementAreaStrategy.generated.h"

class APallet;

UCLASS(Blueprintable, EditInlineNew)
class UUnbrokenPalletsRestrictedPlacementAreaStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<APallet*> _unbrokenPallets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _palletCollisionBoxWhenDroppedTagName;

public:
	UUnbrokenPalletsRestrictedPlacementAreaStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UUnbrokenPalletsRestrictedPlacementAreaStrategy) { return 0; }
