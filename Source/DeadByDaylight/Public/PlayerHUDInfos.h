#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerRole.h"
#include "DBDTableRowBase.h"
#include "PlayerHUDInfos.generated.h"

USTRUCT(BlueprintType)
struct FPlayerHUDInfos: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftObjectPath TouchInterfaceName;

public:
	DEADBYDAYLIGHT_API FPlayerHUDInfos();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerHUDInfos) { return 0; }
