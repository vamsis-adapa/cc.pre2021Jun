#include<bits/stdc++.h>
using namespace std;

std::vector<int> sortByHeight(std::vector<int> a);

int main(int argc, char const *argv[])
{
    vector<int>a =  {-1, 150, 190, 170, -1, -1, 160, 180};
    sortByHeight(a);
    return 0;
}




std::vector<int> sortByHeight(std::vector<int> a) {
    std::vector<int> pos;
    std::vector<int> people;
    int loc = 0;
    for(auto iter = a.begin(); iter!= a.end(); iter++)
    {
        if ( *iter !=-1)
        {
            people.push_back(*iter);
            pos.push_back(loc);
        }
        loc++;
    }
    std::sort(people.begin(), people.end());
    loc = 0;
    for(auto iter  = people.rbegin(); iter!= people.rend(); iter++)
    {
        a[pos[loc]]= *iter;
        loc++;
    }
    return a;
    

}
