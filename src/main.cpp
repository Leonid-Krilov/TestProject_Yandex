#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <TestProject1.cpp>

// с обработкой ввода
// int main()
// {
//     while (true)
//     {
//         int island, tunnel;
//         int valueIsland;
//         std::vector<int> vectorValue;
//         std::vector<std::vector<int>> vectorTunnel;

//         std::cout << "\nEnter quantity island! Quantity insland > 0 and Quantity insland < 20";

//         do
//         {
//             std::cout << "\n>>";
//             std::cin >> island;

//             if (island > 0 && island < 20)
//                 break;
//             else
//                 std::cout << "\nError! Incorrected quantity island";
//         } while (true);

//         std::cout << "\nEnter quantity tunnel! Quantity tunnel > 0 and Quantity insland < (quantity_island * (quantity_island - 1)) / 2";

//         do
//         {
//             std::cout << "\n>>";
//             std::cin >> tunnel;
//             if (tunnel >= 0 && tunnel < ((island*(island - 1)) / 2))
//                 break;
//             else
//                 std::cout << "\nError! Incorrected quantity tunnel";
//         } while (true);

//         const int MINVALUEISLAND = 0;
//         const int MAXVALUEISLAND = 1000000;
//         std::cout << "\nEnter value insland! The value cannot be more expensive 10^6!";

//         for (int i = 0; i < island; i++)
//         {   
//             do
//             {
//                 std::cout << "\nValue island "<< i+1 << " >> ";
//                 std::cin >> valueIsland;

//                 if (valueIsland < MINVALUEISLAND || valueIsland > MAXVALUEISLAND)
//                     std::cout << "\nError enter value island";                
//                 else
//                 {
//                     vectorValue.push_back(valueIsland);
//                     break;
//                 }
//             } while (true);
//         }


//         std::cout << "\nEnter mutual islands";

//         vectorTunnel.resize(island + 1);

//         int a, b;
//         for(int i = 0; i < tunnel; i++)
//         {
//             do
//             {
            
//                 std::cout << "Enter number insland!\n>> ";
//                 std::cin >> a;

//                 std::cout << "Enter number to which island!\n>> ";
//                 std::cin >> b;

//                 if(a < 1 || a > island || b < 1 || b > island || a == b)
//                     std::cout << "\nIncorrected path to island!";
//                 else
//                 {
//                     vectorTunnel[a].push_back(b);
//                     break;
//                 }
                
            
//             } while (true);
//         }

//         GraphIsland calculationsGraph;
//         std::cout << "\n" << calculationsGraph.result(island, vectorTunnel, vectorValue) << "\n";
//     }
// }

//для проверки
int main()
{
    while (true)
    {
        int island, tunnel;
        std::vector<int> vectorValue;
        
        std::cin >> island >> tunnel;
        
        std::vector<std::vector<int>> vectorTunnel(island + 1);

        for (int i = 0; i < island; i++)
        {
            int value;
            std::cin >> value;
            vectorValue.push_back(value);
        }

        for(int i = 0; i < tunnel; i++)
        {
            int a, b;
            std::cin >> a >> b;
            vectorTunnel[a].push_back(b);
        }

        GraphIsland calculationsGraph;
        std::cout << calculationsGraph.result(island, vectorTunnel, vectorValue);

        return 0;
    }
}