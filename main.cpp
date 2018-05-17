#include <vector>
#include <iostream>
#include <iomanip>
#include "include/Client.hpp"

using namespace std;

int main() {
    std::vector<int> networkTopology;
    networkTopology.push_back(3);
    networkTopology.push_back(2);
    networkTopology.push_back(1);

    Client client(networkTopology);

    Utils::printWeights(client.getNetwork(), 5);

    cout << endl;

    Utils::printValues(client.getNetwork(), 5);


    return 0;
}

