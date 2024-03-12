#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "OfferingDropdown.generated.h"

USTRUCT(BlueprintType)
struct FOfferingDropdown: public FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OfferingID;

public:
	DEADBYDAYLIGHT_API FOfferingDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingDropdown) { return 0; }
