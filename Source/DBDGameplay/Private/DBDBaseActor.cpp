#include "DBDBaseActor.h"
#include "Components/SceneComponent.h"

ADBDBaseActor::ADBDBaseActor()
{
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}
