# include <iostream>
const int NUMBER_OF_PLANTS = 4;
void input_data(int a[], int last_plant_number);
void scale(int a[], int size);
void graph (const int asterisk_count[], int last_plant_number);
int main()
{
    using namespace std;
    int production[NUMBER_OF_PLANTS];
    
    cout << "This program displays a graph showing\n"
         << "production for each plant in the company.\n"; 
    input_data(production, NUMBER_OF_PLANTS);
    scale(production, NUMBER_OF_PLANTS);
    graph(production, NUMBER_OF_PLANTS);
    return 0;
}
