#include <iostream>
#include <string.h>

int return69()
{
    std::cout << "\nThis is a test, I want to get better at testing" << std::endl;
    return 0;
}

int main ()
{
    char name[8];
    std::cout << "Please enter your name..." << std::endl;
    std::cin >> name;
    if (strncmp(name, "Rafael", 6) == 0){
        printf("Hello, master!\n");
    }
    else{
        printf("\nHalt, you are not the master!\n");
    }
    printf("%d\n",strlen(name));
    
    
    return69();
//I just want to test if this will show up in GIT
//test again
//ok, this will be the 3rd test
//again, test...

    return 0;
}