#pragma once

#include "CoreMinimal.h"
#include "EPawnInputPressTypes.h"
#include "AITunableParameter.h"
#include "NavLinkInteractPlayerSetup.generated.h"

USTRUCT(BlueprintType)
struct FNavLinkInteractPlayerSetup
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPawnInputPressTypes Input;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InteractionIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter InputTimeDeviationInChase;

public:
	DBDBOTS_API FNavLinkInteractPlayerSetup();
};

FORCEINLINE uint32 GetTypeHash(const FNavLinkInteractPlayerSetup) { return 0; }
