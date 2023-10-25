#pragma once

#include "CoreMinimal.h"
#include "OnItemPropertyDragDetected.h"
#include "Components/Widget.h"
#include "OnItemPropertySelectionChanged.h"
#include "AkItemProperties.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkItemProperties : public UWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnItemPropertySelectionChanged OnSelectionChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnItemPropertyDragDetected OnPropertyDragged;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetSearchText(const FString& newText);

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FString GetSelectedProperty() const;

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FString GetSearchText() const;

public:
	UAkItemProperties();
};

FORCEINLINE uint32 GetTypeHash(const UAkItemProperties) { return 0; }
