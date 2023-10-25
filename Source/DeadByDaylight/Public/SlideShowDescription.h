#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPerkCategory.h"
#include "SlideShowDescription.generated.h"

USTRUCT(BlueprintType)
struct FSlideShowDescription: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Overview;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Playstyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ImageFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPerkCategory> PerkCategory;

public:
	DEADBYDAYLIGHT_API FSlideShowDescription();
};

FORCEINLINE uint32 GetTypeHash(const FSlideShowDescription) { return 0; }
