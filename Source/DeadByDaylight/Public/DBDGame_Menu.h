#pragma once

#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDGame_Menu.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable, NonTransient)
class ADBDGame_Menu : public ADBDBaseGameMode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StartWithSlasher;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ALevelSequenceActor* _sequenceFadeActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ALevelSequenceActor* _sequenceIntroActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ALevelSequenceActor* _sequenceLoopActor;

public:
	ADBDGame_Menu();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGame_Menu) { return 0; }
