#include <vector>
#include <iostream>
#include <iomanip>
#include "include/Client.hpp"

using namespace std;

int main() {
    std::vector<int> networkTopology;
    networkTopology.push_back(4);
    networkTopology.push_back(5);
    networkTopology.push_back(3);

    Client client(networkTopology);

    Utils::printWeights(client.getNetwork());

    return 0;
}

