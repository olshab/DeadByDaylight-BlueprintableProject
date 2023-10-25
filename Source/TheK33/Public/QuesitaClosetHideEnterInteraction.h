#pragma once

#include "CoreMinimal.h"
#include "ClosetHideEnterInteraction.h"
#include "QuesitaPropStruct.h"
#include "QuesitaClosetHideEnterInteraction.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UQuesitaClosetHideEnterInteraction : public UClosetHideEnterInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FQuesitaPropStruct> _propInfos;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _props;

public:
	UQuesitaClosetHideEnterInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UQuesitaClosetHideEnterInteraction) { return 0; }
