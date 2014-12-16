/*In England the currency is made up of pound, £, and pence, p, and there are eight coins in general circulation:

1p, 2p, 5p, 10p, 20p, 50p, £1 (100p) and £2 (200p).
It is possible to make £2 in the following way:

1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p
How many different ways can £2 be made using any number of coins?*/
#include <iostream>

using namespace std;

int main(){
    int iCount = 0;
    for (int i2P = 0; i2P <=200; i2P += 200){
        for (int i1P = 0; i1P <= 200; i1P += 100){
            if ((i2P + i1P) > 200)
                break;
            for (int i50p = 0; i50p <= 200; i50p += 50){
                if ((i2P + i1P + i50p) > 200)
                    break;
                for (int i20p = 0; i20p <= 200; i20p += 20){
                    if ((i2P + i1P + i50p + i20p) > 200)
                        break;
                    for (int i10p = 0; i10p <= 200; i10p += 10){
                        if ((i2P + i1P + i50p + i20p + i10p) > 200)
                            break;
                        for (int i5p = 0; i5p <= 200; i5p += 5){
                            if ((i2P + i1P + i50p + i20p + i10p + i5p) > 200)
                                break;
                            for (int i2p = 0; i2p <= 200; i2p += 2){
                                if ((i2P + i1P + i50p + i20p + i10p + i5p + i2p) > 200)
                                    break;
                                for (int i1p = 0; i1p <= 200; i1p++){
                                    if ((i2P + i1P + i50p + i20p + i10p + i5p + i2p + i1p) > 200)
                                        break;
                                    if ((i2P + i1P + i50p + i20p + i10p + i5p + i2p + i1p) == 200)
                                        iCount += 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << iCount << endl;
}
