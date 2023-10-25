#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "UMGRichTextRewardItemDecorator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UUMGRichTextRewardItemDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* RewardSet;

public:
	UUMGRichTextRewardItemDecorator();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRichTextRewardItemDecorator) { return 0; }
