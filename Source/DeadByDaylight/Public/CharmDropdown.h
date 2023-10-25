#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "CharmDropdown.generated.h"

USTRUCT(BlueprintType)
struct FCharmDropdown: public FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowCharmSelection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowCommonCharms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CharmId;

public:
	DEADBYDAYLIGHT_API FCharmDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FCharmDropdown) { return 0; }
