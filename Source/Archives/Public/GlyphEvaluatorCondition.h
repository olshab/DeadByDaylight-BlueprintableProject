#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "Templates/SubclassOf.h"
#include "GlyphEvaluatorCondition.generated.h"

class AGlyph;

UCLASS(Blueprintable)
class UGlyphEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AGlyph> _glyphClass;

public:
	UGlyphEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UGlyphEvaluatorCondition) { return 0; }
