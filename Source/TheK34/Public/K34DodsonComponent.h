#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "K34DodsonComponent.generated.h"

class AK34Dodson;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK34DodsonComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK34Dodson> _dodsonActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _dodsonActorOffsetOnK34;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK34Dodson* _dodsonActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsDodson, Transient, meta=(AllowPrivateAccess=true))
	bool _isDodson;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsDodson();

public:
	UFUNCTION(BlueprintCallable)
	bool IsDodson();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK34DodsonComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34DodsonComponent) { return 0; }
