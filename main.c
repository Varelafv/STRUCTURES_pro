#include <stdio.h>
#include <stdlib.h>

struct temps {
    unsigned heures ;
    unsigned minutes ;
   double secondes ;
};
float conv (int h ,int  m,float s ){
    float sm = (float)(h*3600 + m*60) + s;
    return (sm);
}
int main() {

    return(0);
}