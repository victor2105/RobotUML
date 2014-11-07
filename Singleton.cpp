#include "Singleton.h"

    void MySingleton::setId(int n){
        id = n;
    }
    
    int MySingleton::getId(){
        return id;
    }
    
    
    MySingleton * MySingleton::instance(){
        static MySingleton inst;
        return &inst;
    }

