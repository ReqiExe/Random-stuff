//========Headers========\\ 

#include <iostream>

//=======================\\ 

//========Currency holder========\\ 

float eur = 8.83; //old 8.23
float dkk = 153.35; //By each 100 old: 110.56
float isk = 9.41;
float jpy = 6.08; //By each 100
float cad = 5.29;
float gbp = 13.35; //old 11.92
float chf = 530.85; //By each 100
float sek = 101.38; //By each 100 old: 90.88
float usd = 10.64; //old 6.64

//===============================\\ 


using namespace std;


//========Vals========\\ 

float utenlandskamount;
float nokAmount;
float calculated;
float calculatedby100 = 0;
string chosenCurrency;

//====================\\ 

void calculate(int calculationOption, int nok, string currency, int utenlandskAmount)
{
    switch (calculationOption)
    {
    case 1: //Nok to utenlandsk
        //Formoula: nok / currency
        if (currency == "eur")
        {
            calculated = nok / eur;
        }
        else if (currency == "dkk")
        {
            calculated = nok / dkk;
            //for only 1
            calculatedby100;
        }
        else if (currency == "isk")
        {
            calculated = nok / isk;
        }
        else if (currency == "jpy")
        {
            calculated = nok / jpy;
            //for only 1
            calculatedby100;
        }
        else if (currency == "cad")
        {
            calculated = nok / cad;
        }
        else if (currency == "gbp")
        {
            calculated = nok / gbp;
        }
        else if (currency == "chf")
        {
            calculated = nok / chf;
            //for only 1
            calculatedby100;
        }
        else if (currency == "sek")
        {
            calculated = nok / sek;
            //for only 1
            calculatedby100;
        }
        else if (currency == "usd")
        {
            calculated = nok / usd;
        }
        break;
    case 2: //Utenlandsk to nok
        // Formula: calculated = currency * utenlandskAmount;
        if (currency == "eur")
        {
            calculated = eur * utenlandskAmount;
        }
        else if (currency == "dkk")
        {
            calculated = dkk * utenlandskAmount;
            calculatedby100 = 1;
        }
        else if (currency == "isk")
        {
            calculated = isk * utenlandskAmount;
        }
        else if (currency == "jpy")
        {
            calculated = jpy * utenlandskAmount;
            //for only 1
            calculatedby100;
        }
        else if (currency == "cad")
        {
            calculated = cad * utenlandskAmount;
        }
        else if (currency == "gbp")
        {
            calculated = gbp * utenlandskAmount;
        }
        else if (currency == "chf")
        {
            calculated = chf * utenlandskAmount;
            //for only 1
            calculatedby100;
        }
        else if (currency == "sek")
        {
            calculated = sek * utenlandskAmount;
            //for only 1
            calculatedby100;
        }
        else if (currency == "usd")
        {
            calculated = usd * utenlandskAmount;
        }
        break;
    default:
        break;
    }
}
int main()
{
    int choice;
    while (true)
    {
        calculatedby100 = 0;
        system("CLS");
        cout << "1: nok to utenlandsk penger 2: utenlandsk penger to nok\n";
        cin >> choice;
        system("CLS");
        switch (choice)
        {
        case 1:
            cout << "Input nok amount:\n";
            cin >> nokAmount;
            system("CLS");
            cout << "Chose currency: eur,dkk,isk,jpy,cad,gbp,chf,sek,usd \n";
            cin >> chosenCurrency;
            for (auto& x : chosenCurrency)
            {
                x = tolower(x);
            }
            calculate(1, nokAmount, chosenCurrency, 0);
            system("CLS");
            if (calculatedby100 > 0)
            {
                cout << "====================\n";
                cout << "100: " << calculated;
                cout << "\n";
                cout << "only 1: " << calculated / 100;
                cout << "\n====================\n";
            }
            else
            {
                cout << "====================\n";
                cout << calculated;
                cout << "\n====================\n";
            }
            system("PAUSE");
            break;
        case 2:
            cout << "Input how much utenlandsk cash to nok:\n";
            cin >> utenlandskamount;
            system("CLS");
            cout << "Chose currency: eur,dkk,isk,jpy,cad,gbp,chf,sek,usd \n";
            cin >> chosenCurrency;
            for (auto& x : chosenCurrency)
            {
                x = tolower(x);
            }
            calculate(2, 0, chosenCurrency, utenlandskamount);
            system("CLS");
            if (calculatedby100 > 0)
            {
                cout << "====================\n";
                cout << "100: " << calculated;
                cout << "\n";
                cout << "only 1: " << calculated / 100;
                cout << "\n====================\n";
            }
            else
            {
                cout << "====================\n";
                cout << calculated;
                cout << "\n====================\n";
            }
            system("PAUSE");
            break;

        default:
            break;
        }
    }
}

//Made by Reqi (It's super garbage, ik. I code in c++ just as a small fun thing)
