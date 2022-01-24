// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Poet_Mage : ModuleRules
{
	public Poet_Mage(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
