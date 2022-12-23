#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <random>

using namespace std;

class User
{
    string name;
    int age;
public:
    User(string name = "", int age = 0)
        : name{ name }, age{ age } {}

    string& Name() { return name; }
    int& Age() { return age; }

    friend ostream& operator<<(ostream& out, const User& user)
    {
        out << "Name: " << user.name << ", age: " << user.age;
        return out;
    }

    friend bool operator==(const User& u1, const User& u2)
    {
        return u1.name == u2.name && u1.age == u2.age;
    }
};

int main()
{
    vector<int> v1{ 1, 2, 3, 4, 5, 6 };
    vector<int> v2{ 11, 22, 33 };

    /*for_each(v1.begin(), v1.end(), [](auto item) { cout << item << " "; });
    cout << "\n";
    for_each(v2.begin(), v2.end(), [](auto item) { cout << item << " "; });
    cout << "\n\n";*/

    /*
    copy(v2.begin(), v2.end(), v1.begin() + 2);

    for_each(v1.begin(), v1.end(), [](auto item) { cout << item << " "; });
    cout << "\n";

    vector<int> v3{ 100, 200, 300, 400 };
    copy(v1.begin() + 1, v1.end() - 1, back_inserter(v3));

    for_each(v3.begin(), v3.end(), [](auto item) { cout << item << " "; });
    cout << "\n";
    */
    /*
    copy_if(v1.begin(), v1.end(), back_inserter(v2),
        [](auto item)
        {
            return !(item % 2);
        });
    for_each(v2.begin(), v2.end(), [](auto item) { cout << item << " "; });
    cout << "\n\n";

    fill(v1.begin() + 1, v1.end() - 1, 10);
    for_each(v1.begin(), v1.end(), [](auto item) { cout << item << " "; });
    cout << "\n";
    */
    srand(time(nullptr));

    /*vector<int> vrand;
    for (int i = 0; i < 10; i++)
        vrand.push_back(rand() % 5);
    for_each(vrand.begin(), vrand.end(), [](auto item) { cout << item << " "; });
    cout << "\n";*/

    //vrand.erase(remove(vrand.begin(), vrand.end(), 2), vrand.end());
    //vrand.erase(remove_if(vrand.begin(), vrand.end(), [](auto item) { return item > 2; }), vrand.end());
    //replace(vrand.begin(), vrand.end(), 2, 10);
    //replace_if(vrand.begin(), vrand.end(), [](auto item) { return item > 2; }, 10);
    //vector<int> resvect;
    /*
    replace_copy_if(vrand.begin(), vrand.end(), back_inserter(resvect), [](auto item) { return item > 2; }, 10);

    for_each(vrand.begin(), vrand.end(), [](auto item) { cout << item << " "; });
    cout << "\n";
    for_each(resvect.begin(), resvect.end(), [](auto item) { cout << item << " "; });
    cout << "\n";
    cout << "\n";*/

    vector<int> v3{ 1, 2, 2, 3, 3, 4, 4, 4, 5, 2, 6, 7, 3, 8, 9, 4 };
    vector<int> v4{ 11, 21, 31, 41, 51, 61, 71, 81, 91 };
    //for_each(v3.begin(), v3.end(), [](auto item) { cout << item << " "; });
    //for(auto item : v3) cout << item << " ";
    copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

    //swap_ranges(v3.begin(), v3.begin() + 4, v4.begin() + 4);
    //reverse(v3.begin() + 3, v3.end() - 2);
    //rotate(v3.begin(), v3.begin() + 2, v3.end() - 3);
    //fill(shift_left(v3.begin(), v3.end(), 3), v3.end(), 0);
    //shift_right(v3.begin(), v3.end(), 3);
    //random_device rd;
    //shuffle(v3.begin(), v3.end(), mt19937(rd()));

    //vector<int> hand;

    //sample(v3.begin(), v3.end(), back_inserter(hand), 4, mt19937(rd()));

    sort(v3.begin(), v3.end());
    copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

    v3.erase(unique(v3.begin(), v3.end()), v3.end());

    copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
    /*copy(hand.begin(), hand.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";*/
    /*copy(v4.begin(), v4.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";*/

}

