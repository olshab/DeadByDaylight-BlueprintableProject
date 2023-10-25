#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ETotemState.h"
#include "TotemBoundPerk.generated.h"

class ATotem;
class AActor;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTotemBoundPerk : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETotemState TotemBoundState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _doNotBindToTotemOnInit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BoundTotems, Transient)
	TArray<ATotem*> _boundTotems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ATotem*> _local_boundTotems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ATotem*> _authorityPrevTotemActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numTotemsToBind;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_BoundTotems();

public:
	UFUNCTION(BlueprintPure)
	TArray<ATotem*> GetTotems() const;

	UFUNCTION(BlueprintPure)
	float GetSquaredDistanceToOwner(const AActor* survivor) const;

	UFUNCTION(BlueprintPure)
	TArray<ATotem*> GetBoundTotems() const;

	UFUNCTION(BlueprintCallable)
	void Authority_UnbindFromTotem(ATotem* aTotemActor);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_BindToDullTotems(bool allowAdditionalBoundTotems);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTotemBoundPerk();
};

FORCEINLINE uint32 GetTypeHash(const UTotemBoundPerk) { return 0; }
