#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommentatorAudioContext.h"
#include "ECommentatorContextCode.h"
#include "Templates/SubclassOf.h"
#include "CommentatorAudioData.generated.h"

class ACommentatorActorBase;
class UCommentatorSpawnStrategy;

UCLASS(Blueprintable)
class UCommentatorAudioData : public UDataAsset
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<ECommentatorContextCode, FCommentatorAudioContext> _commentatorAudioContexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ACommentatorActorBase> _commentatorActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCommentatorSpawnStrategy* _commentatorSpawnStrategy;

public:
	UCommentatorAudioData();
};

FORCEINLINE uint32 GetTypeHash(const UCommentatorAudioData) { return 0; }
