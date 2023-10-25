#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELoadingTransitionType.h"
#include "PresenterManager.generated.h"

class UPresenterGroup;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UPresenterManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UPresenterGroup*> _persistentPresenterGroups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UPresenterGroup*> _transientPresenterGroups;

private:
	UFUNCTION(BlueprintCallable)
	void OnViewportCreated();

	UFUNCTION(BlueprintCallable)
	void OnLoadingTransition(const ELoadingTransitionType transitionType);

public:
	UPresenterManager();
};

FORCEINLINE uint32 GetTypeHash(const UPresenterManager) { return 0; }
