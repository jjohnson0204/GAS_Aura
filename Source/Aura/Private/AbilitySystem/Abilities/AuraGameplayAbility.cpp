// Copyright Light1111


#include "AbilitySystem/Abilities/AuraGameplayAbility.h"

FString UAuraGameplayAbility::GetDescription(int32 Level)
{
	return FString::Printf(TEXT("<Default>%s, </><Level>%d</>"), L"Default Ability Name - Bacon ipsum dolor amet nisi t-bone qui, salami culpa leberkas shankle biltong boudin filet mignon brisket laboris sunt. In magna t-bone incididunt prosciutto. Non cow culpa cupim. Consequat sed incididunt swine lorem, venison anim meatloaf sausage minim.", Level);
}

FString UAuraGameplayAbility::GetNextLevelDescription(int32 Level)
{
	return FString::Printf(TEXT("<Default>Next Level: </><Level>%d</> \n<Default>Causes much more damage. </>"), Level);
}

FString UAuraGameplayAbility::GetLockedDescription(int32 Level)
{
	return FString::Printf(TEXT("<Default>Spell Locked Until Level: %d</>"), Level);
}