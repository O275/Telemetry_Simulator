#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>


struct Telemetry {
    double latitude;
    double longitude;
    double altitude;
    std::time_t timestamp;
};

int main() {
    std::vector<Telemetry> logs;

    for (int i = 0; i < 5; i++) {
        Telemetry t;
        t.latitude = 35.0 + i * 0.001;
        t.longitude = -78.0 - i * 0.001;
        t.altitude = 300 + i * 5;
        t.timestamp = std::time(nullptr);
        logs.push_back(t);
    }

    std::ofstream file("telemetry_log.csv");
    file << "latitude,longitude,altitude,timestamp\n";
    
    // Set fixed precision for floating-point numbers
    file << std::fixed << std::setprecision(6);

    for (auto &t : logs) {
        file << t.latitude << "," << t.longitude << "," << static_cast<int>(t.altitude) << "," << t.timestamp << "\n";
    }
    file.close();

    std::cout << "Telemetry log written to telemetry_log.csv\n";
    return 0;

}
