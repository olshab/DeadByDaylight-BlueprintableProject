#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Presenter.h"
#include "LobbyPresenter.generated.h"

class ULobbySubPresenter;
class UUserWidget;
class ULobbyCharactersSubPresenter;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API ULobbyPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUserWidget> LobbyWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULobbySubPresenter* _activeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULobbyCharactersSubPresenter* _charactersSubPresenter;

public:
	ULobbyPresenter();
};

FORCEINLINE uint32 GetTypeHash(const ULobbyPresenter) { return 0; }
