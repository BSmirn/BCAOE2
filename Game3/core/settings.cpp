#include "settings.h"
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>
using namespace std;
using namespace nlohmann;

void save_settings()
{
	string str = "config.json";
	ofstream config(str);
	json setting;
	setting["camera speed"] = camera_speed;
	config << setw(4) << setting;
}
void load_settings()
{
	string str = "config.json";
	ifstream config(str);
	json setting = json::parse(config);
	camera_speed = setting["camera speed"];
	cout << "camera speed: " << camera_speed << endl;
}