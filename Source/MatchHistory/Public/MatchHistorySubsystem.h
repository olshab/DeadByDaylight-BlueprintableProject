#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MatchHistorySubsystem.generated.h"

class USplinteredStatesSubsystem;

UCLASS(Blueprintable)
class MATCHHISTORY_API UMatchHistorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USplinteredStatesSubsystem* _splinteredStatesSubsystem;

public:
	UMatchHistorySubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UMatchHistorySubsystem) { return 0; }
