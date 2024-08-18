#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  long long n, k, a, m;
  cin >> n >> k >> a >> m;

  // Функция для генерации элемента последовательности
  auto lcg = [&](long long e) {
    return (a * e + 11) % m;
  };

  // Генерируем последовательность монет
  vector<int> coins;
  long long seed = 0;
  while (coins.size() < 1e6) {  // Генерируем достаточно монет
    seed = lcg(seed);
    coins.push_back((abs(seed % 3 - 1) * 5 + abs(seed % 3) * 2) % 8);
  }

  long long total_coins = 0;
  long long total_candies = 0;
  long long current_money = 0;
  int coin_index = 0;

  while (total_candies < n) {
    // Достаем монету
    current_money += coins[coin_index++];
    total_coins++;

    // Проверяем, можем ли купить конфеты
    if (current_money >= 3 * k) {
      // Покупаем максимальное количество конфет
      long long candies_to_buy = min(k + (current_money - 3 * k) / 3, (n - total_candies) / k * k);
      total_candies += candies_to_buy;
      current_money -= candies_to_buy * 3;
    }
  }

  cout << total_coins << endl;
  return 0;
}