	#include<iostream>
	#include<cmath>

	using namespace std;

	int main()
	{

		
		const int		damage_rocket_with_eblade_reduced = 341;
		const int		damage_dagon_with_eblade_reduced[5] = {420,525,630,735,840};
		const int 		int_per_press = 4;
		for(int dagon = 1;dagon < 6;dagon++)
		{
			int	count = 1;
			for (int i = 60; i < 200; i+=int_per_press)
			{	
				int damage_eblade_pure = 75 + (i*2) ;
				int damage_eblade = floor(damage_eblade_pure - (damage_eblade_pure/4));

				int total_damage = damage_eblade + damage_rocket_with_eblade_reduced + damage_dagon_with_eblade_reduced[dagon-1] ;

				cout << "alias eblade_missile_dagon_" <<dagon << "_int" << i << " \"dota_health_per_vertical_marker " << total_damage << ";say_student ebalde_missile_dagon" << dagon <<"+int" << i << "; bind p eblade_missile_dagon_" << dagon << "_int" << i+int_per_press << ";bind [ " << "eblade_missile_dagon_" << dagon+1 << "_int" << i << "\"" << endl;
				count++;
			}
		}

	}

