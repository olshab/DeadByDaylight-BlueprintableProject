#pragma once

#include "CoreMinimal.h"
#include "HideInTerrorRadiusQEEvaluator.h"
#include "GameplayTagContainer.h"
#include "HideInTerrorRadiusWithStateTagQEEvaluator.generated.h"

UCLASS(Blueprintable)
class ARCHIVES_API UHideInTerrorRadiusWithStateTagQEEvaluator : public UHideInTerrorRadiusQEEvaluator
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _stateTags;

public:
	UHideInTerrorRadiusWithStateTagQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHideInTerrorRadiusWithStateTagQEEvaluator) { return 0; }
