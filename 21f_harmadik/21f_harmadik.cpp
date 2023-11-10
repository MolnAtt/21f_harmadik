#include <iostream>
#include <vector>
#include <map> // Nem pont a Dictionary C#-b�l: mert picit lassabb, de rendezett! (piros-fekete fa)
#include <unordered_map> // Dictionary C#-b�l

#include <set> // Szint�n egy piros-fekete fa. (piros-fekete fa: el�g gyors �s rendezett adatszerkezet)
#include <unordered_set> // ez a C# HashSet-je. (has�t�t�bla: szupergyors adatszerkezet)

#include <stack>
#include <queue>



using namespace std;




int main()
{
    cout << "Hello World!\n";



    ///////// LIST�K

    vector<int> lista1;     // []
    vector<int> lista2(5);  // [0 0 0 0 0]
    vector<int> lista3(3, 2);  // [2 2 2]
    vector<int> lista4{1,2,3};  // [1 2 3]

    cout << "m�ret: " << lista1.size() << endl;
    lista1.push_back(10); // lista.Add(10)

    for (int& elem : lista4) // rfor + TAB
    {
        cout << elem << endl;
    }

    //////// SZ�T�RAK


    string szoveg = "lorem ipsum dolor sit amet";

    map<char, int> szotar;
    for (char& c : szoveg)
    {
        if (szotar.find(c) == szotar.end()) // "contains"
        {
            szotar[c] = 1;
        }
        else
        {
            szotar[c]++;
        }
    }

    for (auto& par : szotar)
    {
        cout << par.first << " : " << par.second << endl;
    }

    map<char, int> szotar2;
    for (char& c : szoveg)
    {
        szotar2[c]++;
    }

    for (auto& par : szotar2)
    {
        cout << par.first << " : " << par.second << endl;
    }


    unordered_map<char, int> szotar3;
    for (char& c : szoveg)
    {
        szotar3[c]++;
    }

    for (auto& par : szotar3)
    {
        cout << par.first << " : " << par.second << endl;
    }

    /// HALMAZ 

    set<int> halmaz;

    halmaz.insert(7);
    halmaz.insert(5);
    halmaz.insert(5);
    halmaz.insert(5);

    // halmaz[0]; // ilyet nem lehet! {5, 7} = {7, 5}

    for (const int& elem : halmaz)
    {
        cout << elem << endl;
    }

    halmaz.erase(5);

    for (const int& elem : halmaz)
    {
        cout << elem << endl;
    }

    // VEREM

    stack<int> verem; 

    verem.push(5);
    verem.push(10);
    cout << verem.top() << endl; // C#: peek
    verem.pop(); // C#-al szemben ez void!
    cout << verem.empty() << endl;

    // SOR

    cout << "sor:\n";

    queue<int> sor;
    sor.push(5); // C# enqueue
    sor.push(10); 
    cout << sor.front() << endl;
    sor.pop();  // C# dequeue
    cout << sor.front() << endl;

    // 

    cout << "kupac kovetkezik" << endl;
    priority_queue<int> kupac; // els�bbs�gi sor!

    // az a l�nyeg, hogy mindig a maxim�lis / minim�lis elemet veszi ki. Fontos, hogy rendezhet�ek legyenek az elemek!

    kupac.push(5);
    kupac.push(1);
    kupac.push(8);
    kupac.push(10);
    kupac.push(3);
    kupac.push(9);
    kupac.push(7);

    cout << kupac.top() << endl;
    kupac.pop();
    cout << kupac.top() << endl;
    kupac.pop();
    cout << kupac.top() << endl;
    kupac.pop();

    // nek�nk ehhez: Dijkstra-algoritmus! C#-ban nincs kupac! �rthetetlen... Nek�nk is fejlettebb kupacra lesz sz�ks�g�nk!



}

