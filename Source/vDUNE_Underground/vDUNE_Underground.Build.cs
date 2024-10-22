// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class vDUNE_Underground : ModuleRules
{
	public vDUNE_Underground(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
