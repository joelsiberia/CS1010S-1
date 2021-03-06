#include <iostream>

using namespace std;

int simulate(int start_population, int end_generation, int G, int K) 
{
    double new_population = start_population;
    int kill;
    for (int i = 1; i <= end_generation; i++)
    {
        if (i % G == 0)
        {
            kill = (new_population / 100) * K;
            //cout << "Kill: " << kill << endl;
            new_population = new_population - kill;
        }
            new_population *= 2;
            //cout << new_population << endl;    
    }
    return new_population;
}


int main() {
    cout << "** simulate(50, 10, 3, 10 )" << endl;
    cout << simulate(50, 10, 3, 10 ) << endl;

    cout << "** simulate(1, 20, 1, 50 )" << endl;
    cout << simulate(1, 20, 1, 50 ) << endl;

    cout << "** simulate(100, 8, 4, 90 )" << endl;
    cout << simulate(100, 8, 4, 90 ) << endl;

    cout << "** simulate(10, 50, 12, 100 )" << endl;
    cout << simulate(10, 50, 12, 100 ) << endl;

    return 0;
}