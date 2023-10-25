#pragma once

#include "CoreMinimal.h"
#include "OnLoadoutFilterClickedEvent.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGLoadoutFilterWidget.generated.h"

class UHorizontalBox;
class UUMGLoadoutFilterButton;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoadoutFilterWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLoadoutFilterClickedEvent OnLoadoutFilterClicked;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGLoadoutFilterButton> AtlantaLoadoutFilterButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* FilterContainerBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> Filters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UUMGLoadoutFilterButton*> FilterButtons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UUMGLoadoutFilterButton* SelectedFilterButton;

public:
	UFUNCTION(BlueprintCallable)
	void OnFilterButtonClicked(FName filterName);

	UFUNCTION(BlueprintCallable)
	void InitFilterWidget(const TMap<FName, TSoftObjectPtr<UTexture2D>>& filtersInfo);

	UFUNCTION(BlueprintCallable)
	void ClearSelectedFilter();

public:
	UUMGLoadoutFilterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadoutFilterWidget) { return 0; }
