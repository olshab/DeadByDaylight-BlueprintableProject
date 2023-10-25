#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnItemBoolPropertySelectionChanged.h"
#include "OnItemBoolPropertyDragDetected.h"
#include "AkItemBoolProperties.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkItemBoolProperties : public UWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnItemBoolPropertySelectionChanged OnSelectionChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnItemBoolPropertyDragDetected OnPropertyDragged;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetSearchText(const FString& newText);

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FString GetSelectedProperty() const;

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FString GetSearchText() const;

public:
	UAkItemBoolProperties();
};

FORCEINLINE uint32 GetTypeHash(const UAkItemBoolProperties) { return 0; }
