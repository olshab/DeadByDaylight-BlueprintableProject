#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "ObjectPlacerComponent.generated.h"

class UStaticMeshComponent;
class UObjectPlacementUpdateStrategy;
class UObjectPlacementValidationStrategy;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UObjectPlacerComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UObjectPlacementUpdateStrategy* _objectPlacementUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UObjectPlacementValidationStrategy* _objectPlacementValidationStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _objectMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _meshOffsetZ;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _socketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _indicatorOffsetY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _indicatorOffsetX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _itemObjectId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _showIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _stayActiveWhileItemInUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hideIndicatorDuringAttack;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _tagsPreventingObjectPlacement;

public:
	UFUNCTION(BlueprintCallable)
	void SetShowIndicator(bool newValue);

	UFUNCTION(BlueprintCallable)
	void SetObjectMesh(UStaticMeshComponent* objectMesh);

	UFUNCTION(BlueprintCallable)
	void SetMeshOffsetZ(float z);

	UFUNCTION(BlueprintCallable)
	void SetIndicatorOffsetY(float y);

	UFUNCTION(BlueprintCallable)
	void SetIndicatorOffsetX(float x);

	UFUNCTION(BlueprintCallable)
	void SetHideIndicatorDuringAttack(bool enable);

	UFUNCTION(BlueprintPure)
	bool IsPlacementValid() const;

	UFUNCTION(BlueprintPure)
	FRotator GetObjectPlacementRotation() const;

	UFUNCTION(BlueprintPure)
	FVector GetObjectPlacementLocation() const;

	UFUNCTION(BlueprintCallable)
	void ActivateObjectPlacement(bool active);

public:
	UObjectPlacerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UObjectPlacerComponent) { return 0; }
