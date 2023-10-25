#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGGhostfaceSpecific.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UUMGGhostfaceSpecific : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* LeftLeanImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* RightLeanImage;

public:
	UUMGGhostfaceSpecific();
};

FORCEINLINE uint32 GetTypeHash(const UUMGGhostfaceSpecific) { return 0; }
