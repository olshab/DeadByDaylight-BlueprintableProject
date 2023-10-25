#pragma once

#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "UObject/NoExportTypes.h"
#include "RedStainComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API URedStainComponent : public USpotLightComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _initialSpotLightColor;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateRedStain(bool shouldBeHidden, const float alpha);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_HideRedStain(const bool hideStain);

public:
	URedStainComponent();
};

FORCEINLINE uint32 GetTypeHash(const URedStainComponent) { return 0; }
