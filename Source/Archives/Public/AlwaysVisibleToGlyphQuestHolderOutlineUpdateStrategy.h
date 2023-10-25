#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "AlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _outlineColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _glyphQuestId;

public:
	UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy) { return 0; }
