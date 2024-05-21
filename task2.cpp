#include<bits/stdc++.h>

using namespace std;

class room{
private:
    int length, width;
    int beds;
    int desktop, area;
public:
    room(int length, int width, int beds, int desktop);
    void add_bed();
    void add_desktop();
    int get_area();
    int get_num_of_beds();
    int get_num_of_desktop();
};

class elevator{
private:
    int max_num_of_people = 4;
public:
    elevator();
    int get_max_num_of_people();
};

class bathroom{
private:
    int length, width, area;
public:
    bathroom(int length, int width);
    int get_area();
};

class apartment{
private:
    int length, width, area;
    vector<room>Room;
    vector<bathroom>Bath;
public:
    apartment(int length, int area, int NumOfRooms, int NumOfBathrooms);
    int GetNumOfRooms();
    int GetNumOfBathrooms();
    int GetArea();
};

class building{
private:
    vector<apartment>Apart;
    vector<elevtor>elev;
public:
    building(int NumOfApartments, int NumOfElevators);
    int GetNumOfApartments();
    int GetNumOfElevators();
};

int main(){
    return 0;
}