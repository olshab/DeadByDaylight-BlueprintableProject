#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreArrayWidget.generated.h"

class UUMGBloodStoreRowWidget;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBloodStoreArrayWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreRowWidget* FirstBloodStoreRowWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreRowWidget* SecondBloodStoreRowWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreRowWidget* ThirdBloodStoreRowWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreRowWidget* FourthBloodStoreRowWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreRowWidget* FifthBloodStoreRowWidget;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGBloodStoreRowWidget*> _bloodStoreRowArray;

private:
	UFUNCTION(BlueprintCallable)
	void BroadcastBloodNodeSelected(const FString& id);

public:
	UUMGBloodStoreArrayWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreArrayWidget) { return 0; }
