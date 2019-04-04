#include <iostream>
#include <random>
#include <stdlib.h>

float sigma=0.447;

float gaussian(float a);
void MCMD();

int main(){
    MCMD();
    return 0;
}

float gaussian(float x){
    return exp(-(x*x)/(sigma*sigma));
}
void MCMD(){
    srand48(time(0));
    float anterior=drand48();
    float propuesta;
    float alpha;
    float r;
    int i;
    for (i=0;i<100000;i++){
        std::cout << anterior << std::endl;
        propuesta= anterior + (drand48()-0.5)*sigma;
        alpha=drand48();
        r=gaussian(propuesta)/gaussian(anterior);
        if (r>1){
            r=1;
            
        }
        if (alpha<r){
            anterior=propuesta;
        }
        
    }
}
