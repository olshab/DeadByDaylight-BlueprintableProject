#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseModifierCondition.generated.h"

class UBaseModifierContainer;
class AActor;
class UModifierSubjectProvider;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UBaseModifierCondition : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OwningModifier, Transient, Export, meta=(AllowPrivateAccess=true))
	UBaseModifierContainer* _owningModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UModifierSubjectProvider* _subjectProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SubjectProviderClass, Transient, meta=(AllowPrivateAccess=true))
	UClass* _subjectProviderClass;

public:
	UFUNCTION(BlueprintCallable)
	void SetSubjectProviderClass(UClass* subjectProviderClass);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SubjectProviderClass();

	UFUNCTION(BlueprintCallable)
	void OnRep_OwningModifier();

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitializeSubjectProviderClass();

public:
	UFUNCTION(BlueprintPure)
	AActor* GetOwningActor() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBaseModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const UBaseModifierCondition) { return 0; }
