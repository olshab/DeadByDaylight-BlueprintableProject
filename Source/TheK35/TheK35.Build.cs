using UnrealBuildTool;

public class TheK35 : ModuleRules {
	public TheK35(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"AIModule",
			"Activation",
			"AkAudio",
			"AnimationBudgetAllocator",
			"AnimationUtilities",
			"BinkMediaPlayer",
			"Competence",
			"Core",
			"CoreCommonUIUtils",
			"CoreUObject",
			"CoreUtilities",
			"Customization",
			"DBDAnimation",
			"DBDAnimationBudgetAllocator",
			"DBDAudio",
			"DBDCompetence",
			"DBDCosmetic",
			"DBDGameplay",
			"DBDInput",
			"DBDInteraction",
			"DBDSharedTypes",
			"DBDUIViewInterfaces",
			"DBDUIViewsMobile",
			"DataTableUtilities",
			"DeadByDaylight",
			"Engine",
			"Foliage",
			"GFXUtilities",
			"GameSessionDS",
			"GameflowNotifications",
			"GameplayTagUtilities",
			"GameplayTags",
			"GameplayUtilities",
			"InputCore",
			"InputUtilities",
			"Interaction",
			"LevelSequence",
			"MediaAssets",
			"MovieScene",
			"NavigationSystem",
			"NetworkUtilities",
			"Niagara",
			"OnlinePresence",
			"OnlineSubsystemUtils",
			"OnlineTransactions",
			"Paper2D",
			"Penalty",
			"PhysicsCore",
			"PhysicsUtilities",
			"PlatformsProviders",
			"Projectile",
			"QueryService",
			"RemoteContentCache",
			"ReversibleActionSystem",
			"ScaleformUI",
			"SignificanceUtilities",
			"Slate",
			"SlateCore",
			"SocialParty",
			"StatSystem",
			"SystemUtilities",
			"TimeUtilities",
			"Toasts",
			"UMG",
			"VFXUtilities",
		});
	}
}