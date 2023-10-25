#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EKnowledgeSharingType.h"
#include "ActorKnowledgeCollection.generated.h"

class AActor;
class ACharacter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorKnowledgeCollection : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Actors, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _actors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _previousActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _available;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ACharacter* _possessor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	EKnowledgeSharingType _sharing;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Actors();

public:
	UFUNCTION(BlueprintCallable)
	void Local_SetAvailable(bool value);

	UFUNCTION(BlueprintPure)
	bool IsAvailable(const ACharacter* character) const;

	UFUNCTION(BlueprintPure)
	bool Contains(AActor* actor) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetSharingType(EKnowledgeSharingType value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetPossessor(ACharacter* possessor);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetAvailable(bool value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Remove(AActor* actor);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Empty();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Append(const TArray<AActor*>& actors);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_Add(AActor* actor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UActorKnowledgeCollection();
};

FORCEINLINE uint32 GetTypeHash(const UActorKnowledgeCollection) { return 0; }
