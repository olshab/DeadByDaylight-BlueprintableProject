#pragma once

#include "CoreMinimal.h"
#include "KillerInstinctInterface.h"
#include "CustomKillerInstinctData.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "KillerInstinctComponent.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UKillerInstinctComponent : public UActorComponent, public IKillerInstinctInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomKillerInstinctData _defaultKillerInstinctAsset;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UNiagaraComponent* _particleSystemComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _camperHighlightColorOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FCustomKillerInstinctData> _customKillerInstinctData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FCustomKillerInstinctData _currentKillerInstinctData;

protected:
	UFUNCTION(BlueprintCallable)
	void SetParticleSystem(UNiagaraComponent* particleSystemComponent);

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerLocallyObservedChanged(bool locallyObserved);

public:
	UFUNCTION(BlueprintPure)
	bool IsOwnerInKillerInstinctRadius() const;

private:
	UFUNCTION(BlueprintCallable)
	UNiagaraComponent* GetParticleSystem();

public:
	UKillerInstinctComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerInstinctComponent) { return 0; }
