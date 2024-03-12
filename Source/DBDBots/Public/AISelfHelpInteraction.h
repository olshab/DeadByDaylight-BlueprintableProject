#pragma once

#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "AITunableParameter.h"
#include "AISelfHelpInteraction.generated.h"

USTRUCT(BlueprintType)
struct FAISelfHelpInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputInteractionType InputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BasicWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsesSurvivorItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PreferHelpFromOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsesAISkill;

public:
	DBDBOTS_API FAISelfHelpInteraction();
};

FORCEINLINE uint32 GetTypeHash(const FAISelfHelpInteraction) { return 0; }
