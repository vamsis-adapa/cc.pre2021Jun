#include <bits/stdc++.h>

using namespace std;

string
ltrim(const string&);
string
rtrim(const string&);
vector<string>
split(const string&);

/*
 * Complete the 'minMoves' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. 2D_INTEGER_ARRAY maze
 *  2. INTEGER x
 *  3. INTEGER y
 */

int
in_range(vector<vector<int>>& maze, pair<int, int> k)
{
  if (k.first < 0 || k.first >= maze.size())
    return 0;
  else if (k.second < 0 || k.second >= maze[0].size())
    return 0;

  if (maze[k.first][k.second] % 2)
    return 0;
  return 1;
}
int
bfs(vector<vector<int>> maze,
    int startx,
    int starty,
    int endx,
    int endy,
    int depth)
{
  queue<pair<pair<int, int>, int>> quo;

  map<pair<int, int>, int> dist;

  pair<int, int> start = make_pair(startx, starty);
  quo.push(make_pair(start, 0));
  while (quo.size()) {
    int dist = quo.front().second;
    start = quo.front().first;
    maze[start.first][start.second] = 1;
    quo.pop();

    startx = start.first;
    starty = start.second;

    if (startx == endx && starty == endy)
      return dist;

    pair<int, int> left = make_pair(startx - 1, starty);
    pair<int, int> right = make_pair(startx + 1, starty);
    pair<int, int> up = make_pair((startx), starty + 1);
    pair<int, int> down = make_pair(startx, starty - 1);

    if (in_range(maze, left))
      quo.push(make_pair(left, dist + 1));
    if (in_range(maze, right))
      quo.push(make_pair(right, dist + 1));
    if (in_range(maze, up))
      quo.push(make_pair(up, dist + 1));
    if (in_range(maze, down))
      quo.push(make_pair(down, dist + 1));
  }

  return -1;
}

int
minMoves(vector<vector<int>> maze, int x, int y)
{

  set<pair<int, int>> coins;

  int i = 0;
  int j = 0;
  for (auto iter = maze.begin(); iter != maze.end(); iter++) {
    for (auto iterb = iter->begin(); iterb != iter->end(); iterb++) {
      if (*iterb == 2)
        coins.insert(make_pair(i, j));
      j++;
    }
    i++;
  }

  int tot_dist = 0;

  int arr[coins.size() + 2][coins.size() + 2];
  i = 0;

  for (auto iter = coins.begin(); iter != coins.end(); iter++) {
    int j = i + 1;
    auto iternext = ++iter;
    iter--;
    for (; iternext != coins.end(); ++iternext) {
      arr[i + 1][j + 1] = bfs(
        maze, iter->first, iter->second, iternext->first, iternext->second, 0);
      arr[j + 1][i + 1] = arr[i + 1][j + 1];
      if (arr[i + 1][j + 1] == -1)
        return -1;
      j++;
    }
    i++;
  }
  i = 0;
  for (auto iter = coins.end(); iter != coins.end(); iter++) {

    arr[0][i + 1] = bfs(maze, 0, 0, iter->first, iter->second, 0);
    i++;
    if (arr[0][i + 1] == -1)
      return -1;
  }

  for (auto iter = coins.end(); iter != coins.end(); iter++) {

    arr[i + 1][0] = bfs(maze, x, y, iter->first, iter->second, 0);
    i++;
    if (arr[i + 1][0] == -1)
      return -1;
  }

  // mst of directed graph?

  return 0;
}
int
main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string maze_rows_temp;
  getline(cin, maze_rows_temp);

  int maze_rows = stoi(ltrim(rtrim(maze_rows_temp)));

  string maze_columns_temp;
  getline(cin, maze_columns_temp);

  int maze_columns = stoi(ltrim(rtrim(maze_columns_temp)));

  vector<vector<int>> maze(maze_rows);

  for (int i = 0; i < maze_rows; i++) {
    maze[i].resize(maze_columns);

    string maze_row_temp_temp;
    getline(cin, maze_row_temp_temp);

    vector<string> maze_row_temp = split(rtrim(maze_row_temp_temp));

    for (int j = 0; j < maze_columns; j++) {
      int maze_row_item = stoi(maze_row_temp[j]);

      maze[i][j] = maze_row_item;
    }
  }

  string x_temp;
  getline(cin, x_temp);

  int x = stoi(ltrim(rtrim(x_temp)));

  string y_temp;
  getline(cin, y_temp);

  int y = stoi(ltrim(rtrim(y_temp)));

  int result = minMoves(maze, x, y);

  fout << result << "\n";

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

vector<string>
split(const string& str)
{
  vector<string> tokens;

  string::size_type start = 0;
  string::size_type end = 0;

  while ((end = str.find(" ", start)) != string::npos) {
    tokens.push_back(str.substr(start, end - start));

    start = end + 1;
  }

  tokens.push_back(str.substr(start));

  return tokens;
}
