#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

int main()
{

  vector<string> foods = {"kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi"};
  vector<string> cuisines = {"korean", "japanese", "japanese", "greek", "japanese", "korean"};
  vector<int> ratings = {9, 12, 8, 15, 14, 7};

  unordered_map<string, map<int, string>> mp;

  for (int i = 0; i < cuisines.size(); i++)
  {
    mp[cuisines[i]].push_back({foods[i], ratings[i]});
  }

  return 0;
}
