#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextNestedTagsDecorator.generated.h"

UCLASS(Blueprintable)
class URichTextNestedTagsDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()

public:
	URichTextNestedTagsDecorator();
};

FORCEINLINE uint32 GetTypeHash(const URichTextNestedTagsDecorator) { return 0; }
