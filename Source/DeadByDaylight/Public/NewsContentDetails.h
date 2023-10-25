#pragma once

#include "CoreMinimal.h"
#include "NewsContentDetails.generated.h"

USTRUCT(BlueprintType)
struct FNewsContentDetails
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Version;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool ImagePath_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DwnImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool DwnImagePath_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ImageHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool ImageHeight_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool IsHidden_IsSet;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Type_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ContentTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartDate;

public:
	DEADBYDAYLIGHT_API FNewsContentDetails();
};

FORCEINLINE uint32 GetTypeHash(const FNewsContentDetails) { return 0; }
