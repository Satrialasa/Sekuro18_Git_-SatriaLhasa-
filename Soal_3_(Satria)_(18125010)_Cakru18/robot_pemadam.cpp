#include <iostream>
#include <string>

using namespace std;

class Robot_Pemadam {
private:
    int jarak;
    string status;

public:
    void inputSensor(int nilai) {
        jarak = nilai;
    }

    void prosesLogika() {
        if (jarak > 20) {
            status = "Maju Mencari Api";
        }
        else if (jarak <= 20 && jarak > 5) {
            status = "UDAH DEKET NIH DEKET BRAY!";
        }
        else if (jarak <= 5) {
            status = "Posisi Tepat gas semprot kali ya!";
        }
    }

    void cetakStatus() {
        cout << "[Sensor: " << jarak << " cm] -> Action: " << status << endl;
    }
};

int main() {
    Robot_Pemadam robot;
    int input;

    while (true) {
        cout << "Masukkan jarak sensor (67 untuk keluar): ";
        cin >> input;

        if (input == 67) {
            cout << "Program dihentikan." << endl;
            break;
        }

        robot.inputSensor(input);
        robot.prosesLogika();
        robot.cetakStatus();
    }

    return 0;
}