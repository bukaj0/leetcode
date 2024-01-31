#include <unordered_map>
#include <string>

class UndergroundSystem {
public:
    std::unordered_map<int, std::pair<std::string, int>> checkInData;
    std::unordered_map<std::string, std::pair<int, int>> journeyData;

    UndergroundSystem() {}

    void checkIn(int id, std::string stationName, int t) {
        checkInData[id] = {stationName, t};
    }

    void checkOut(int id, std::string stationName, int t) {
        auto& checkIn = checkInData[id];
        std::string route = checkIn.first + "->" + stationName;
        journeyData[route].first += t - checkIn.second;
        journeyData[route].second += 1;
    }

    double getAverageTime(std::string startStation, std::string endStation) {
        std::string route = startStation + "->" + endStation;
        auto& journey = journeyData[route];
        return (double)journey.first / journey.second;
    }
};
