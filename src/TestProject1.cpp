#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

class GraphIsland
{
public:
    GraphIsland() = default;

    int result(int& island, std::vector<std::vector<int>>& vectorTunnel, std::vector<int>& vectorValue)
    {
        std::vector<int> dp(island + 1, -1);

        std::function<int(int)> dfs = [&](int u) -> int
        {
            if (dp[u] != -1)
                return dp[u];
            
            int maxTreasure = vectorValue[u - 1];
            
            for (int v : vectorTunnel[u])
                maxTreasure = std::max(maxTreasure, vectorValue[u - 1] + dfs(v));
            
            
            dp[u] = maxTreasure;
            return maxTreasure;
        };
        
        return dfs(1);
    }
};