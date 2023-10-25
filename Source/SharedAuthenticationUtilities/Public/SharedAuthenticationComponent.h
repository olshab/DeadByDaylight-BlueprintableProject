#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "ESharedAuthenticationProvider.h"
#include "UObject/SoftObjectPtr.h"
#include "SharedAuthenticationComponent.generated.h"

class UUserWidget;
class UUMGAutheticationProviderSelection;
class UUMGAuthenticationProviderSelection;
class USharedAuthenticationMigrateComponent;

UCLASS(Blueprintable)
class SHAREDAUTHENTICATIONUTILITIES_API USharedAuthenticationComponent : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PopupZOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUMGAutheticationProviderSelection> AuthenticationProviderSelectionWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGAuthenticationProviderSelection> AuthenticationProviderSelectionWidgetToLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ESharedAuthenticationProvider, TSoftClassPtr<UUserWidget>> LoginBackgroundToLoadWidgetToLoadMap;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UObject* _worldContextObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUserWidget* _loginBackgroundWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGAuthenticationProviderSelection* _identityAuthenticationSelectionWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USharedAuthenticationMigrateComponent* _migrateComponent;

public:
	USharedAuthenticationComponent();
};

FORCEINLINE uint32 GetTypeHash(const USharedAuthenticationComponent) { return 0; }
