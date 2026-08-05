A C++ mobile robot library providing simulated sensor outputs (Wheel Speeds, Odometry, and LiDAR) using modern C++17 and CMake.

Directory Structure:
* `include/` - Header declarations (`.hpp`) and data structures.
* `src/` - Implementation of robot logic and sensor simulation.
* `apps/` - Example driver application (`main.cpp`).


Build:
```bash:
	mkdir -p build && cd build
	cmake ..
	make
Run:
	./mobile_robot_app
