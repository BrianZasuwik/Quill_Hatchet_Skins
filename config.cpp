class CfgPatches
{
	class Quill_Hatchet_Camos
	{
		name="Quill's Hatchet H-60 Camouflages";
		requiredAddons[]={"vtx_main"};
		author="Quill";
		units[]= {};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class Heli_Transport_01_base_F;
class CfgVehicles
{
	class vtx_H60_base: Heli_Transport_01_base_F
	{
		class textureSources
		{
			class Quill_S9TT
			{
				displayName = "Valkyries Two Tone";
				author = "Quill";
				textures[] = {
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"Quill_Hatchet_Skins\Sigma9TT\hull_main_co.paa",
					"Quill_Hatchet_Skins\Sigma9TT\misc_co.paa",
					"Quill_Hatchet_Skins\Sigma9TT\hull_Tail_co.paa"
				};
				materials[]=
				{
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"z\vtx\addons\UH60\data\exterior\hull main.rvmat",
					"z\vtx\addons\UH60\data\exterior\misc.rvmat",
					"z\vtx\addons\UH60\data\exterior\hull tail.rvmat"
				};
				factions[] = {};
			};
		};
	};
};