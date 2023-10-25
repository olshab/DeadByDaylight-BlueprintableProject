#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FXWidgetPlayer.h"
#include "FXUserWidgetBase.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UFXUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraSystem* niagaraSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isFillingWidget;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FFXWidgetPlayer _particlePlayer;

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintCosmetic)
	void StopParticle() const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintCosmetic)
	void PlayParticle(float startAtTime, int32 numLoopsToPlay) const;

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	UNiagaraComponent* GetNiagaraFX();

public:
	UFXUserWidgetBase();
};

FORCEINLINE uint32 GetTypeHash(const UFXUserWidgetBase) { return 0; }
