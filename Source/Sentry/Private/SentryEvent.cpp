#include "SentryEvent.h"
#include "ESentryLevel.h"

void USentryEvent::SetMessage(const FString& Message)
{

}

void USentryEvent::SetLevel(ESentryLevel Level)
{

}

FString USentryEvent::GetMessage() const
{
	return TEXT("");
}

ESentryLevel USentryEvent::GetLevel() const
{
	return ESentryLevel::Debug;
}

USentryEvent::USentryEvent()
{

}
