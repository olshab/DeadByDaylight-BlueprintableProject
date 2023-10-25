#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AlternatingColor.generated.h"

UCLASS(Blueprintable)
class UAlternatingColor : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor FirstColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor SecondColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float ColorChangePeriod;

public:
	UAlternatingColor();
};

FORCEINLINE uint32 GetTypeHash(const UAlternatingColor) { return 0; }
