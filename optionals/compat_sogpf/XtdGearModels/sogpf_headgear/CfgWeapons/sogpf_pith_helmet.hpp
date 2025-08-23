class sogpf_pith_helmet {
	label="Pith Helmet";
	author="Savage Game Design";
	options[]= { "branch", "accessories" };

	class branch : sogpf_branch
	{
		alwaysSelectable = 1;
		values[] = {"MACV_SOG", "PAVN", "VC", "VPN" };
	};

	class accessories
	{
		alwaysSelectable = 1;
		label = CSTRING(Accessories_Label);
		values[] = {"None", "Assault", "Camo", "Driver", "Net", "Strap" };
		class None
		{
			label = CSTRING(None);
		};
		class Assault
		{
			label = "Assault";
		};
		class Camo
		{
			label = "Camo";
		};
		class Driver
		{
			label = "Driver";
		};
		class Net
		{
			label = "Net";
		};
		class Strap
		{
			label = "Strap";
		};
	};
};
