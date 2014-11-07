#ifndef MYSINGLETON_H
#define MYSINGLETON_H

#include <iostream>

using namespace std;

// Nous alons utlizer ce Singleton comme une base pour les autres

class MySingleton{
private:

    MySingleton(){
    
    }
    
    int id;

public:
    
    
    void setId(int n);
    
    int getId();
    
    static MySingleton * instance();
    
};


#endif
