#pragma once

#include "CoreMinimal.h"
#include "PerspectiveDependentAnimSequenceSelector.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPerspectiveDependentAnimSequenceSelector
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _current;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAnimSequence* _thirdPerson;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAnimSequence* _firstPerson;

public:
	DBDANIMATION_API FPerspectiveDependentAnimSequenceSelector();
};

FORCEINLINE uint32 GetTypeHash(const FPerspectiveDependentAnimSequenceSelector) { return 0; }
