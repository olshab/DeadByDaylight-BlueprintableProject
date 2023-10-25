#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "EStatusEffectType.h"
#include "StatusViewProperties.generated.h"

class AStatusView;
class UTexture2D;

USTRUCT(BlueprintType)
struct FStatusViewProperties: public FDBDTableRowBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _statusViewID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _displayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AStatusView> _statusViewBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatusEffectType _statusType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString _iconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> _iconAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _playIntroAnimation;

public:
	DEADBYDAYLIGHT_API FStatusViewProperties();
};

FORCEINLINE uint32 GetTypeHash(const FStatusViewProperties) { return 0; }
