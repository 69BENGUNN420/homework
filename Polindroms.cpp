#include <iostream>
#include <string>

int main()
{
    std::string polindroms;
    std::cout << "Skaitlis: ";
    std::cin >> polindroms;
    int length = polindroms.length();
    if (length % 2 == 0) {
        std::string one = polindroms.substr(0,length/2);
        std::string two = polindroms.substr(length / 2, length);
        std::string rotate;
        for (int i = length/2-1; i >= 0; i=i-1) {
            rotate = rotate + two[i];
                
        }
        if (rotate == one) {
            std::cout << "Polindroms";
        }
    }
    if (length % 2 != 0) {
        std::string one = polindroms.substr(0, (length-1)/2);
        std::string two = polindroms.substr((length+1) / 2, length);
        std::string rotate;
        for (int i = length / 2 - 1; i >= 0; i = i - 1) {
            rotate = rotate + two[i];

        }
        if (rotate == one) {
            std::cout << "Polindroms" << std::endl;
        }
    }
    //all polyndroms length 6
    std::string polyHalf = "000";
    std::string polyHalf2 = polyHalf;
    int i;
    i = std::stoi(polyHalf);
    int count = 0;
    while (i != 1000) {
        polyHalf.append(polyHalf2);
        std::cout << polyHalf << std::endl;
        i++;
        polyHalf2 = std::to_string(i);
        
        while(polyHalf2.length()<3){
            count++;
            polyHalf2.append("0");
        }
        polyHalf = "";
        for (int i = 0; i < count; i++) {
            polyHalf.append("0");
        }
        polyHalf.append(std::to_string(i));
        polyHalf2 = "";
        count = 0;
        for (int i = 2; i >= 0; i--) {
            polyHalf2 = polyHalf2 + polyHalf[i];
        }
    }
}
