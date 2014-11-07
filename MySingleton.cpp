#include "MySingleton.h"


    void MySingleton::setId(int n){
        int i = 8;
        id = n + i;
    }
    
    int MySingleton::getId(){
        return id;
    }
    
    
    MySingleton * MySingleton::instance(){
        static MySingleton inst;
        return &inst;
    }

