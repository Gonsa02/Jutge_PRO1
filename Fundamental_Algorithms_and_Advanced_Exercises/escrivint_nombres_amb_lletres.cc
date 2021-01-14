#include <iostream>
#include <vector>
using namespace std;

//Explicacio breu: creem un vector de strings amb valors utils
//Contindra els nums del 1-20 i  els nums de 10 en 10, el cent, mil....
//21 (0-20) +  7 (30 - 90) + 2 (100) + 1 (1000)
// +1(milio) + 1 (milions) , 33 elements en total;

//Accio per fer cout dels numeros desde el 21 fins el 100 inclosos

void desenes_i_cent(int k,const vector<string>& nums){
    if(k <= 20) cout << nums[k];
    else if(k == 30 or k == 40 or k == 50 or k == 60 or k == 70 or k == 80 or k == 90 or k == 100){
        k = k/10;
        cout << nums[18 + k];
    }
    else if(k > 20 and k < 30){
        k = k - 20;
        cout << "vint-i-" << nums[k];
    }
    else if(k > 30 and k < 40) cout << "trenta-" << nums[k%30];
    else if(k > 40 and k < 50) cout << "quaranta-" << nums[k%40];
    else if(k > 50 and k < 60) cout << "cinquanta-" << nums[k%50];
    else if(k > 60 and k < 70) cout << "seixanta-" << nums[k%60];
    else if(k > 70 and k < 80) cout << "setanta-" << nums[k%70];
    else if(k > 80 and k < 90) cout << "vuitanta-" << nums[k%80];
    else if(k > 90 and k < 100) cout << "noranta-" << nums[k%90];

}

//Accio per escriure qualsevol nombre entre 101 i 1000 inclosos

void centenes_i_mil(int k,const vector<string>& nums){
    if(k <= 100) desenes_i_cent(k,nums);
    else if(k == 1000) cout << nums[30];
    else if(k == 200 or k == 300 or k == 400 or k == 500 or k == 600 or k == 700 or k == 800 or k == 900) cout << nums[k/100] << "-cents";

    else if(k > 100 and k < 200){
        cout << "cent ";
        desenes_i_cent(k%100,nums);
    }
    else if(k > 200 and k < 300){
        cout << "dos-cents ";
        desenes_i_cent(k%200,nums);
    }
     else if(k > 300 and k < 400){
        cout << "tres-cents ";
        desenes_i_cent(k%300,nums);
    }
     else if(k > 400 and k < 500){
        cout << "quatre-cents ";
        desenes_i_cent(k%400,nums);
    }
     else if(k > 500 and k < 600){
        cout << "cinc-cents ";
        desenes_i_cent(k%500,nums);
    }
     else if(k > 600 and k < 700){
        cout << "sis-cents ";
        desenes_i_cent(k%600,nums);
    }
     else if(k > 700 and k < 800){
        cout << "set-cents ";
        desenes_i_cent(k%700,nums);
    }
     else if(k > 800 and k < 900){
        cout << "vuit-cents ";
        desenes_i_cent(k%800,nums);
    }
     else if(k > 900 and k < 1000){
        cout << "nou-cents ";
        desenes_i_cent(k%900,nums);
    }

}

//Accio per esciure qualsevol nombre entre 1001 i 999.999 inclosos

void milers(int k, const vector<string>& nums){
    if(k <= 1000) centenes_i_mil(k,nums);
    else if(k%1000 == 0){
        centenes_i_mil(k/1000,nums);
        cout << " mil";
    }
    else if(k%1000 != 0){
        if(k > 1000 and k < 2000){
            cout << "mil ";
            centenes_i_mil(k%1000,nums);

        }
        else{
            centenes_i_mil(k/1000,nums);
            cout << " mil ";
            centenes_i_mil(k%1000,nums);
        }

    }
}

//Accio per els nombres entre un milio i 2 mil milions

void milions(int k,const vector<string> nums){
    if(k < 1000000) milers(k,nums);
    else if(k == 1000000) cout << "un " << nums[31];
    else if(k%1000000 == 0){
        milers(k/1000000,nums);
        cout << " " << nums[32];
    }
    else if(k%1000000 != 0){
        if(k > 1000000 and k < 2000000){
            milers(k/1000000,nums);
            cout << " milio ";
            milers(k%1000000,nums);
        }
        else{
            milers(k/1000000,nums);
            cout << " milions ";
            milers(k%1000000,nums);
        }
    }
}


void escriure_resultat(int k,const vector<string>& nums){
    if(k >= 0 and k <= 20){
        cout << nums[k];
    }
    else if(k > 20 and k <= 100){
        desenes_i_cent(k,nums);
    }
    else if(k > 100 and k <= 1000){
        centenes_i_mil(k,nums);
    }
    else if(k > 1000 and k < 1000000){
        milers(k,nums);
    }
    else if(k >= 1000000 and k <= 2000000000){
        milions(k,nums);
    }

}

int main(){

    //inicialitzacio vector de strings utils

    vector<string> nums(33);
    nums[0] = "zero";
    nums[1] = "un";
    nums[2] = "dos";
    nums[3] = "tres";
    nums[4] = "quatre";
    nums[5] = "cinc";
    nums[6] = "sis";
    nums[7] = "set";
    nums[8] = "vuit";
    nums[9] = "nou";
    nums[10] = "deu";
    nums[11] = "onze";
    nums[12] = "dotze";
    nums[13] = "tretze";
    nums[14] = "catorze";
    nums[15] = "quinze";
    nums[16] = "setze";
    nums[17] = "disset";
    nums[18] = "divuit";
    nums[19] = "dinou";
    nums[20] = "vint";
    nums[21] = "trenta";
    nums[22] = "quaranta";
    nums[23] = "cinquanta";
    nums[24] = "seixanta";
    nums[25] = "setanta";
    nums[26] = "vuitanta";
    nums[27] = "noranta";
    nums[28] = "cent";
    nums[29] = "cents";
    nums[30] = "mil";
    nums[31] = "milio";
    nums[32] = "milions";




    int k;
    while(cin >> k){
        cout << k << ": ";
        escriure_resultat(k,nums);
        cout << "." << endl;
    }

}
