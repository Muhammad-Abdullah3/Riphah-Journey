#include<iostream>
using namespace std;
int main()
{
	int total_units = 5*23;
	int unit_price = 13;
	int tot_rev = 0;
	int par_rev = 0;
	tot_rev = total_units*unit_price;
	par_rev = unit_price*19;
	cout<<"Total Chocolates:"<<total_units<<endl;
	cout<<"Revenue after selling all chocolates:"<<tot_rev<<endl;
	cout<<"Revenue after selling 19 chocolates:"<<par_rev<<endl;	
	return 0;
}