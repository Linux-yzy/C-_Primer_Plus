/**
 * @file myfirst.cpp
 * @brief 
 * @version
 * @copyright Copyright (c) 2022
 * @history:
 * Date                         Author      Version    Description
 * 2022-02-27 08-34-12          Byron
 */
#include <iostream>
/**
 * @brief 
 * @return int 
 * @note:
 * @history:
 * Date                         Author      Version    Description
 * 2022-02-27 08-35-21          Byron
 */
int main(void)
{
    using namespace std;

    int carrots;

    cout << "how many carrots do you have?"<<endl;
    cin >> carrots;
    cout << "here are two more.";
    carrots +=2;
    cout << "now you have " << carrots << " carrots." << endl;


    return 0;

}