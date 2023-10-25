#pragma once

#include "CoreMinimal.h"
#include "BasePoolableActorComponent.h"
#include "AuthoritativePoolableActorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UAuthoritativePoolableActorComponent : public UBasePoolableActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Acquired, meta=(AllowPrivateAccess=true))
	bool _acquired;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Acquired();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAuthoritativePoolableActorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAuthoritativePoolableActorComponent) { return 0; }
