
# C++ Telemetry Simulator (Windows)

This project demonstrates a simple telemetry logger and validator written in **C++** and **Python**.  
It generates mock flight telemetry, writes it to a CSV file, and verifies the data format with a Python script.

---

## 🧠 Purpose

This small project shows working knowledge of:

- C++17 programming and file I/O
- Data formatting with precision control
- Python scripting for validation
- Version control (Git)
- Windows compilation using MinGW or Visual Studio

---

## 🛠️ Build (MinGW Example)

```powershell
g++ -std=c++17 -Wall main.cpp -o telemetry.exe


If using the Visual Studio Developer Command Prompt:

cl /EHsc main.cpp

▶️ Run
.\telemetry.exe


The program outputs telemetry_log.csv with simulated coordinates, altitude, and timestamp.

Example:

Latitude,Longitude,Altitude,Timestamp
35.000000,-78.000000,300,1761049547
35.001000,-78.001000,305,1761049547

🐍 Validate with Python
python check_log.py


Expected output:

{'Latitude': '35.000000', 'Longitude': '-78.000000', 'Altitude': '300', 'Timestamp': '1761049547'}
...

📂 Project Structure
├── main.cpp
├── check_log.py
├── telemetry_log.csv
└── README.md

🧩 Notes

std::fixed and std::setprecision(6) ensure clean floating-point formatting.

t.altitude is cast to int to store altitude as a whole number instead of a floating-point value.

This structure mirrors common aerospace software tasks: generating, logging, and validating telemetry data.

👤 Author

Ryan Schwarz
C++ | Python
