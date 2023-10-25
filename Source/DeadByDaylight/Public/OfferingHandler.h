#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OfferingHandler.generated.h"

class UDBDGameInstance;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UOfferingHandler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDGameInstance* _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<FName> _levelPerkIDs;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UOfferingHandler();
};

FORCEINLINE uint32 GetTypeHash(const UOfferingHandler) { return 0; }
