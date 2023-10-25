#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BloodwebSettings.generated.h"

UCLASS(Blueprintable)
class UBloodwebSettings : public UDataAsset
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FName> _duplicableItems;

public:
	UBloodwebSettings();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebSettings) { return 0; }
