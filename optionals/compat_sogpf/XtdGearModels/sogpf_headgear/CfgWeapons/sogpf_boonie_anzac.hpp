class sogpf_boonie_anzac {
	label="Boonie (ANZAC)";
	author="Savage Game Design";
	options[]= { "stripe", "folding" };

	class stripe
	{
		alwaysSelectable = 1;
		label = "Stripe";
		values[] = {"No", "Yes" };
		class No
		{
			label = CSTRING(No);
		};
		class Yes
		{
			label = CSTRING(Yes);
		};
	};

	class folding
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = CSTRING(Folding_Label);
		values[] = {"None", "Rear", "Oval"};
		class None
		{
			label = CSTRING(None);
			actionlabel = "Unfold Sides";
		};
		class Rear
		{
			label = "Rear";
			actionlabel = "Fold Rear";
		};
		class Oval
		{
			label = "Oval";
			actionlabel = "Fold Sides Down";
		};
	};
};
