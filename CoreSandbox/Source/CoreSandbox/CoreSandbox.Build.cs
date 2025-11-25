// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CoreSandbox : ModuleRules
{
	public CoreSandbox(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CoreSandbox",
			"CoreSandbox/Variant_Platforming",
			"CoreSandbox/Variant_Platforming/Animation",
			"CoreSandbox/Variant_Combat",
			"CoreSandbox/Variant_Combat/AI",
			"CoreSandbox/Variant_Combat/Animation",
			"CoreSandbox/Variant_Combat/Gameplay",
			"CoreSandbox/Variant_Combat/Interfaces",
			"CoreSandbox/Variant_Combat/UI",
			"CoreSandbox/Variant_SideScrolling",
			"CoreSandbox/Variant_SideScrolling/AI",
			"CoreSandbox/Variant_SideScrolling/Gameplay",
			"CoreSandbox/Variant_SideScrolling/Interfaces",
			"CoreSandbox/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
