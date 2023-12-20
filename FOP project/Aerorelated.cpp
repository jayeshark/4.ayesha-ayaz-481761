
//Problem: Rocket Trajectory Calculation



#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double initial_velocity, launch_angle, gravitational_acceleration, air_resistance_coefficient, time_interval;
    double max_height, t_max, total_flight_time, horizontal_distance, sin_theta, cos_theta, v0_squared;

    cout << "Enter initial velocity (m/s): ";
    cin >> initial_velocity;

    cout << "Enter launch angle (radians): ";
    cin >> launch_angle;

    cout << "Enter gravitational acceleration (m/s^2): ";
    cin >> gravitational_acceleration;

    cout << "Enter air resistance coefficient: ";
    cin >> air_resistance_coefficient;

    cout << "Enter time interval for calculations (seconds): ";
    cin >> time_interval;

 sin_theta = sin(launch_angle);  //calculating theta related values
 cos_theta = cos(launch_angle);
v0_squared = initial_velocity * initial_velocity; //calculating square value to make calculation easier

    
max_height = (v0_squared * sin_theta * sin_theta) / (2 * gravitational_acceleration); // Calculate maximum height

t_max = (initial_velocity * sin_theta) / gravitational_acceleration;   // Calculate time to reach maximum height

total_flight_time = 2 * t_max;   // Calculate total time of flight

horizontal_distance = initial_velocity * cos_theta * total_flight_time;  // Calculate horizontal distance traveled

	cout << endl;
    cout << "Maximum height reached by the rocketis " << max_height << " meters"<<endl;
    cout << "Time taken to reach the maximum height is " << t_max << " seconds"<<endl;
    cout << "Total time of flight before the rocket hits the ground is " << total_flight_time << " seconds"<<endl;
    cout << "Horizontal distance traveled by the rocket is " << horizontal_distance << " meters"<<endl;

    return 0;
}