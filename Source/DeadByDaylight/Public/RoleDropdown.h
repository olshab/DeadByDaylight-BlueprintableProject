#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "RoleDropdown.generated.h"

USTRUCT(BlueprintType)
struct FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowRoleSelection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

public:
	DEADBYDAYLIGHT_API FRoleDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FRoleDropdown) { return 0; }
