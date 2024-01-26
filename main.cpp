#include <iostream>
#include <cmath>

using namespase std;

int main(){
    int n = 5;
    double mh = 1.0 / 3000;
    double denominator = n * sqrt(2) * mh;
    cout << "Знаменатель относительной погрешности периметра полигона: " << denominator << end;
    return 0;
}