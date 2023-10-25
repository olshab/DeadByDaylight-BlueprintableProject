#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FootBoneData.h"
#include "LocomotionPredictor.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class DBDANIMATION_API ULocomotionPredictor : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UAnimSequence*, FFootBoneData> _animFootData;

public:
	ULocomotionPredictor();
};

FORCEINLINE uint32 GetTypeHash(const ULocomotionPredictor) { return 0; }
