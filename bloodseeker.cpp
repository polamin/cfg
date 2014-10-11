	#include<iostream>
	#include<cmath>

	using namespace std;

	int main()
	{

		
		const int		damage_dagon_5_with_skill1 = 840;
		const int		damage_dagon_5_with_skill1_eblade = floor(damage_dagon_5_with_skill1 + (damage_dagon_5_with_skill1 * 0.55));
		const int 		agi_per_press = 4;

			int	count = 1;
			for (int i = 60; i < 300; i+=agi_per_press)
			{	
				int damage_eblade_pure = 75 + (i*2) ;
				int damage_eblade_with_skill1 = floor(damage_eblade_pure + (damage_eblade_pure * 0.4));

				int total_damage = damage_eblade_with_skill1  + damage_dagon_5_with_skill1_eblade ;

				cout << "alias eblade_dagon_skill1" << "_agi" << i << " \"dota_health_per_vertical_marker " << total_damage
					<< ";say_student agi = " << "+agi" << i
					<< "; bind p eblade_dagon_skill1" << "_agi" << i+agi_per_press
					<< ";bind [ " << "eblade_dagon_skill1" << "_agi" << i << "\"" << endl;
				count++;
			}

	}

