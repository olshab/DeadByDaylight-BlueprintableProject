#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractableLockerStatusFilter.h"
#include "InLockerPerk.h"
#include "BTService_FindInteractor_Locker.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Locker : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFindInteractableLockerStatusFilter StatusFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool LockerNeedsToBeOpenable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInLockerPerk> PerksToRunInLocker;

public:
	UBTService_FindInteractor_Locker();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Locker) { return 0; }
