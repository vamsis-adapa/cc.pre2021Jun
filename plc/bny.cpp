#include <bits/stdc++.h>

using namespace std;

string
ltrim(const string&);
string
rtrim(const string&);

/*
 * Complete the 'getSafePaths' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY journeys as parameter.
 */

int
fac(int x)
{
  if (x == 0 || x == 1) {
    return 1;
  }
  return x * fac(x - 1);
}

vector<string>
getSafePaths(vector<string> journeys)
{
  // convert string to stream

  vector<string> fina;

  for (auto iter = journeys.begin(); iter != journeys.end(); iter++) {
    stringstream j;
    int x, y, k;
    j << *iter;
    j >> x >> y >> k;

    string ans;
    int prez = 0;

    int counter = 0;
    while (k > y) {
      k = k - y - 1;

      y = y - 1;
      counter++;
    }
    for (int i = 0; i < counter; i++) {
      ans.append("V");
    }
    for (int i = 0; i < x - 1; i++) {
      ans.append("H");
    }
    for (int i = 0; i < k; i++) {
      ans.append("V");
    }
    ans.append("H");
    for (int i = 0; i < y - k; i++) {
      ans.append("V");
    }
    k = 0;

    cout << ans << endl;
    fina.push_back((ans));
  }
  return fina;
}
int
main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string journeys_count_temp;
  getline(cin, journeys_count_temp);

  int journeys_count = stoi(ltrim(rtrim(journeys_count_temp)));

  vector<string> journeys(journeys_count);

  for (int i = 0; i < journeys_count; i++) {
    string journeys_item;
    getline(cin, journeys_item);

    journeys[i] = journeys_item;
  }

  vector<string> result = getSafePaths(journeys);

  for (int i = 0; i < result.size(); i++) {
    fout << result[i];

    if (i != result.size() - 1) {
      fout << "\n";
    }
  }

  fout << "\n";

  fout.close();

  return 0;
}

string
ltrim(const string& str)
{
  string s(str);

  s.erase(s.begin(),
          find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
  return s;
}

string
rtrim(const string& str)
{
  string s(str);

  s.erase(
    find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
    s.end());

  return s;
}
