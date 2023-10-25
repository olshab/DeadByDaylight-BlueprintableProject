#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "RoleGenderCharacterRotation.generated.h"

USTRUCT(BlueprintType)
struct FRoleGenderCharacterRotation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRoleDropdown Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Rotation;

public:
	DEADBYDAYLIGHT_API FRoleGenderCharacterRotation();
};

FORCEINLINE uint32 GetTypeHash(const FRoleGenderCharacterRotation) { return 0; }
