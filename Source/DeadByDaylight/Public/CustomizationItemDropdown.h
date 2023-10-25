#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "CustomizationItemDropdown.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationItemDropdown: public FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemID;

public:
	DEADBYDAYLIGHT_API FCustomizationItemDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationItemDropdown) { return 0; }
