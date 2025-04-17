class Solution {
public:
    int romanToInt(string s) {
        int wynik = 0;
        for (int i=0; i<size(s); i++){
            switch (s[i]){

                case 'I':
                if (s[i+1] == 'V' || s[i+1] == 'X'){
                    wynik--;
                }
                else{
                    wynik++;
                }
                continue;

                case 'V':
                wynik = wynik+5;
                continue;

                case 'X':
                if (s[i+1] == 'L' || s[i+1] == 'C'){
                    wynik = wynik-10;
                }
                else{
                wynik = wynik+10;
                }
                continue;

                case 'L':
                wynik = wynik+50;
                continue;

                case 'C':
                if (s[i+1] == 'D' || s[i+1] == 'M'){
                    wynik = wynik-100;
                }
                else{
                    wynik = wynik+100;
                }
                continue; 

                case 'D':
                wynik = wynik+500;
                continue; 

                case 'M':
                wynik = wynik+1000;
                continue; 
            }
        }
        return wynik;
    }
};
