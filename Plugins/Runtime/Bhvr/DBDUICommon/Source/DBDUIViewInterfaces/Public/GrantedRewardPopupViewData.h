#pragma once

#include "CoreMinimal.h"
#include "ERewardPopupType.h"
#include "UObject/NoExportTypes.h"
#include "GrantedRewardPopupViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UGrantedRewardPopupViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ERewardPopupType Type;

public:
	UGrantedRewardPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UGrantedRewardPopupViewData) { return 0; }
