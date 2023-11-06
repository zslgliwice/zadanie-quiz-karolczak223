#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main(){
    //https://cpp0x.pl/kursy/Kurs-WinAPI-C++/Roznosci/Kolory-w-konsoli/374
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 3);

    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");
    cout<< "3...";
    Sleep(500);
    system("cls");
    cout<< "3...2...";
    Sleep(500);
    system("cls");
    cout<< "3...2...1...";
    Sleep(500);
    system("cls");
    SetConsoleTextAttribute(uchwyt, 6);
    cout << imie << ", witaj w tescie z gier na platformie Steam!"<<endl;
    SetConsoleTextAttribute(uchwyt, 3);
    cout << "Wpisz litere odpowiadajaca za odpowiedz, ktora chcesz wybrac."<<endl;

    cout << "Pierwsze pytanie:"<<endl;

    cout << "Czy jestes gotowy na ten quiz?"<<endl;
    cout << "a) Tak"<<endl;
    cout << "b) Tak"<<endl;
    cout << "c) Nie"<<endl;
    SetConsoleTextAttribute(uchwyt, 15);
    cout << "Twoja odpowiedz: "<<endl;
    cin >> odp;
    SetConsoleTextAttribute(uchwyt, 3);

    if(odp == "a" || odp == "b"){
        cout << "Poprawna odpowiedz!"<<endl;
        cout << "Widzisz? To nie jest takie trudne!"<<endl;
        cout << "To bylo pytanie sprawdzajace, wiec punkty dostaniesz dopiero za nastepne poprawne odpowiedzi."<<endl;
    }
    else{
        cout << "Zla odpowiedz. Nie ma, ze nie ;D"<<endl;
        cout << "To bylo pytanie sprawdzajace, wiec nic nie tracisz."<<endl;
        cout << "Teraz pytanie na punkty, wiec postaraj sie dobrze odpowiedziec!"<<endl;
    }
    cout << "Punkty: " << pkt<<endl<<endl;
    Sleep(6000);
    system("cls");

    cout << "Co mozna robic w grze ";
    SetConsoleTextAttribute(uchwyt, 14);
    cout << "Cookie clicker?"<<endl;
    SetConsoleTextAttribute(uchwyt, 3);
    cout << "a) Prowadzic ogrod"<<endl;
    cout << "b) Klikac w ciastko"<<endl;
    cout << "c) Glaskac smoka"<<endl;
    SetConsoleTextAttribute(uchwyt, 15);
    cout << "Twoja odpowiedz: "<<endl;
    cin >> odp;
    SetConsoleTextAttribute(uchwyt, 3);
    if(odp == "a" || odp == "b" || odp == "c"){
        cout << "To bylo podchwytliwe pytanie ;)"<<endl;
        cout << "Tak naprawde wszystkie odpowiedzi sa poprawne!"<<endl;
        pkt++;
    }
    else{
        cout << "Tak naprawde wszystkie z powyzszych odpowiedzi byly prawidlowe!"<<endl;
        cout << "Nastepnym razem wpisz literke odpowiadajaca za odpowiedz!"<<endl;
    }
    cout << "Punkty: " << pkt<<endl<<endl;
    Sleep(5000);
    system("cls");

    cout << "Teraz gleboko pomysl. Glownym zajeciem w ";
    SetConsoleTextAttribute(uchwyt, 14);
    cout << "Cookie clickerze ";
    SetConsoleTextAttribute(uchwyt, 3);
    cout << "jest klikanie. Jest ona takze gra typu idle."<<endl;
    cout << "Ile srednio uzytkownikow gra w ta gre na Steamie codziennie?"<<endl;
    cout << "a) 400"<<endl;
    cout << "b) 11500"<<endl;
    cout << "c) 1700"<<endl;
    SetConsoleTextAttribute(uchwyt, 15);
    cout << "Twoja odpowiedz: "<<endl;
    cin >> odp;
    SetConsoleTextAttribute(uchwyt, 3);
    if(odp == "b"){
        cout << "Poprawna odpowiedz!"<<endl;
        cout << "Troche duzo, co nie?"<<endl;
        pkt++;
    }
    else{
        cout << "Zla odpowiedz!";
        cout << "Spokojnie, tez bylem zaskoczony, gdy to pierwszy raz zobaczylem."<<endl;
    }
    cout << "Punkty: " << pkt<<endl<<endl;
    Sleep(5000);
    system("cls");

    cout << "Gra Garry's Mod wyszla w 2006 roku, jest to gra typu sandbox. Zawiera ona 29 osiagniec, z ktorych jedno jest uwazane jako 'niemozliwe' do zdobycia."<<endl;
    cout << "Co trzeba zrobic, aby je odblokowac?"<<endl;
    cout << "a) Zagrac na tym samym serwerze, co tworca gry."<<endl;
    cout << "b) Spedzic 365 dni grajac (czas w menu sie nie liczy)."<<endl;
    cout << "c) Wlaczyc gre 1000 razy."<<endl;
    SetConsoleTextAttribute(uchwyt, 15);
    cout << "Twoja odpowiedz: "<<endl;
    cin >> odp;
    SetConsoleTextAttribute(uchwyt, 3);
    if(odp == "a"){
        cout << "Poprawna odpowiedz!"<<endl;
        cout << "Mimo absurdalnosci reszty z wymienionych osiagniec, zagranie na tym samym serwerze, co tworca gry jest (przynajmniej w tym momencie) niemozliwe."<<endl;
        cout << "Jest to glownie przez fakt, ze zagral on w ta gre ostatni raz 2 lata temu."<<endl;
        pkt++;
    }
    else{
        cout << "Zla odpowiedz!"<<endl;
        cout << "Mimo absurdalnosci reszty z wymienionych osiagniec, zagranie na tym samym serwerze, co tworca gry jest (przynajmniej w tym momencie) niemozliwe."<<endl;
        cout << "Jest to glownie przez fakt, ze zagral on w ta gre ostatni raz 2 lata temu."<<endl;
    }
    cout << "Punkty: " << pkt<<endl<<endl;
    Sleep(12000);
    system("cls");

    cout << "Teraz prostsze pytanie..."<<endl;
    Sleep(3000);
    cout << "Wracajac do Garry's Moda, jak ma na imie tworca gry?"<<endl;
    Sleep(1400);
    system("cls");
    cout << "Wracajac do *poprzedniego pytania ;)*, jak ma na imie tworca gry?"<<endl;
    cout << "a) Garry"<<endl;
    cout << "b) Gary"<<endl;
    cout << "c) Larry"<<endl;
    SetConsoleTextAttribute(uchwyt, 15);
    cout << "Twoja odpowiedz: "<<endl;
    cin >> odp;
    SetConsoleTextAttribute(uchwyt, 3);
    if(odp == "a"){
        cout << "Poprawna odpowiedz!"<<endl;
        pkt++;
    }
    else{
        cout << "Zla odpowiedz!"<<endl;
    }
    cout << "Punkty: " << pkt<<endl<<endl;
    Sleep(4000);
    system("cls");

    cout << "Ktora gra posiada najwyzszy procent pozytywnych recenzji z wymienionych ponizej?"<<endl;
    cout << "a) Terraria"<<endl;
    cout << "b) Stardew Valley"<<endl;
    cout << "c) Portal"<<endl;
    SetConsoleTextAttribute(uchwyt, 15);
    cout << "Twoja odpowiedz: "<<endl;
    cin >> odp;
    SetConsoleTextAttribute(uchwyt, 3);
    if(odp == "b"){
        cout << "Poprawna odpowiedz!"<<endl;
        cout << "Gra ";
        SetConsoleTextAttribute(uchwyt, 14);
        cout << "'Stardew Valley' ";
        SetConsoleTextAttribute(uchwyt, 3);
        cout << "posiada w tym momencie 98% pozytywnych recenzji oraz jest czwarta najlepiej oceniana gra na Steamie!"<<endl;
        pkt++;
    }
    else{
        cout << "Zla odpowiedz!"<<endl;
        cout << "Gra ";
        SetConsoleTextAttribute(uchwyt, 14);
        cout << "'Stardew Valley' ";
        SetConsoleTextAttribute(uchwyt, 3);
        cout << "byla poprawna odpowiedzia. Posiada ona w tym momencie 98% pozytywnych recenzji oraz jest czwarta najlepiej oceniana gra na Steamie!"<<endl;
    }
    Sleep(6000);
    system("cls");
        cout << "Dziekuje za wziecie udzialu w tym tescie!"<<endl;
        cout << "Twoja koncowa ilosc punktow to: " << pkt<<endl;
        if(pkt>=4){
            SetConsoleTextAttribute(uchwyt, 14);
            cout << "Dobra robota!";
        }
        else if(pkt == 3 || pkt == 2){
            SetConsoleTextAttribute(uchwyt, 10);
            cout << "Moglo byc lepiej, ale nadal gratulacje!";
        }
        else{
            SetConsoleTextAttribute(uchwyt, 12);
            cout << "Niestety, nie najlepiej ci poszlo :/";
        }
        SetConsoleTextAttribute(uchwyt, 3);
    Sleep(8000);
    system("cls");

    return 0;
}
