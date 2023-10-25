#pragma once

#include "CoreMinimal.h"
#include "TrailSettings.h"
#include "Components/ActorComponent.h"
#include "TrailData.h"
#include "UObject/NoExportTypes.h"
#include "PatrolTrailComponent.generated.h"

class ATrailNode;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPatrolTrailComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FTrailData _trail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTrailSettings _trailSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float clearPathNodeDelay;

public:
	UFUNCTION(BlueprintPure)
	bool IsTrailCompleted() const;

	UFUNCTION(BlueprintPure)
	ATrailNode* GetPreviousNode(ATrailNode* currentNode) const;

	UFUNCTION(BlueprintPure)
	ATrailNode* GetNextNode(ATrailNode* currentNode) const;

	UFUNCTION(BlueprintPure)
	FVector GetLastPosition() const;

	UFUNCTION(BlueprintPure)
	ATrailNode* GetLastNode() const;

	UFUNCTION(BlueprintPure)
	ATrailNode* GetFirstNode() const;

	UFUNCTION(BlueprintPure)
	float GetCurrentTrailLength() const;

	UFUNCTION(BlueprintPure)
	bool DoesTrailExist() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_StopRecordingTrail();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_StartRecordingTrail();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPatrolTrailComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPatrolTrailComponent) { return 0; }
