#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PopupFactory.generated.h"

class UDBDGameInstance;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UPopupFactory : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDGameInstance* _gameInstance;

public:
	UPopupFactory();
};

FORCEINLINE uint32 GetTypeHash(const UPopupFactory) { return 0; }
