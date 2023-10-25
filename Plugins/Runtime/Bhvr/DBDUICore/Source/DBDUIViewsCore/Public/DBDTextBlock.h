#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "TextBlockOverrideProperties.h"
#include "DBDTextBlock.generated.h"

class USwitchDockStateManager;
class UDBDTextManager;

UCLASS(Blueprintable)
class UDBDTextBlock : public UTextBlock
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TextStyle;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	USwitchDockStateManager* _switchDockStateManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDBDTextManager* _textManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _characterLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isUpperCase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasLargeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTextBlockOverrideProperties _largeTextProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _overrideUndockedPropertiesWithLargeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasUndocking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTextBlockOverrideProperties _undockedProperties;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsUpperCase(bool isUpperCase);

protected:
	UFUNCTION(BlueprintCallable)
	void PreviewUndocked();

	UFUNCTION(BlueprintCallable)
	void PreviewLargeText();

	UFUNCTION(BlueprintCallable)
	static void PopulateTextStyles();

	UFUNCTION(BlueprintCallable)
	void OnSwitchDockStateChanged(bool isDocked);

	UFUNCTION(BlueprintCallable)
	void OnLargeTextSettingsChanged(bool isLargeText);

	UFUNCTION(BlueprintCallable)
	static TArray<FString> GetTextStyles();

public:
	UFUNCTION(BlueprintPure)
	bool GetIsUpperCase() const;

public:
	UDBDTextBlock();
};

FORCEINLINE uint32 GetTypeHash(const UDBDTextBlock) { return 0; }
