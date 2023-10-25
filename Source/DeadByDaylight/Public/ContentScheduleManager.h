#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ContentScheduleManager.generated.h"

class UObjectLibrary;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UContentScheduleManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UObjectLibrary* _availableMapLibrary;

public:
	UContentScheduleManager();
};

FORCEINLINE uint32 GetTypeHash(const UContentScheduleManager) { return 0; }
