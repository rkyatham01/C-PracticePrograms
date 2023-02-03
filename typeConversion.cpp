#include <iostream>

int main(){
    //type conversions (explicit or implicit type conversions exist)

    double x = (int)3.14; //explicit cast
    std::cout << x << '\n';
    std::cout << (char)100 << '\n'; //explicit cast

    int correct = 8;
    int questions = 12;
    double score = correct/(double)questions * 100;
    std::cout << score << '%';
    return 0;
}