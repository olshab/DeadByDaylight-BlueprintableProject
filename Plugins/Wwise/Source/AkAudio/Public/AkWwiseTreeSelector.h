#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnItemSelectionChanged.h"
#include "OnItemDragDetected.h"
#include "AkWwiseTreeSelector.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkWwiseTreeSelector : public UWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnItemSelectionChanged OnSelectionChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnItemDragDetected OnItemDragged;

public:
	UAkWwiseTreeSelector();
};

FORCEINLINE uint32 GetTypeHash(const UAkWwiseTreeSelector) { return 0; }
