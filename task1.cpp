#include <iostram>

using namespace std;

class date{
    private:
       int Day, Month, Year;

       //style 1
       string S1();

       //style 2
       string S2();

       //style3
       string S3();

    public:
        date(int Day, int Month, int Year);
        string GetDate(int Style);

};

class time{
    private:
        int sec, min, hours;
        //style 1
        string S1();

        //style 2
        string S2();

        //style3
        string S3();

    public:
        time(int sec, int min, int hours);
        string GetTime(int Style);
        int GetSec();
        int GetMin();
        int Gethours();
};

int main(){

}
