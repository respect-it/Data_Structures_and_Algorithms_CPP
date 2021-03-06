## Attacking Vigorously the Leaderboard 

[Attacking Vigorously the Leaderboard Judge System](https://www.hackerrank.com/contests/practice-6-sda/challenges/attacking-vigorously-the-leaderboard)

Довършете балансираното AVL дърво като имплементирате следните операции

- 1. добавяне на елемент
- 2. премахване на елемент

Забранено е използването на stl::set или stl::map

#### Входен формат

При add ако числото вече съществува, да изписва "X already added" и нов ред след това (на мястото на X да се изписва самото подадено число)

При remove ако числото не съществува, да изписва "X not found to remove" и нов ред след това (на мястото на X да се изписва самото подадено число)

#### Ограничения

<img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{N}\le{100000}">

<img src="https://latex.codecogs.com/svg.latex?\Large&space;int.MinVALUE\le{number}\le{int.MaxVALUE}">

#### Изходен формат

При операция contains изпишете "yes" или "no" в зависимост от това дали даденото число се съдържа в дървото.

При операция print изпишете текущото състояние на дървото във формат Ляво-Корен-Дясно с разстояние между елементите.

Note! cout << fixed; винаги връща до 6 символа след десетичната запетая.

Примерен вход|Очакван изход
-|-
7<br>add 58<br>add 98<br>contains 58<br>add 52<br>contains 23<br>add 23<br>print|yes<br>no<br>23.000000 52.000000 58.000000 98.000000 
16<br>add 8.43<br>add 5.83<br>add 7.66<br>add 1.92<br>remove 7.66<br>add 4.47<br>add -2.76<br>contains 7.23<br>add -1.64<br>remove 5.49<br>add 4.66<br>add 3.04<br>add 4.47<br>contains 8.43<br>add 7.34<br>print|no<br>5.490000 not found to remove<br>4.470000 already added<br>yes<br>-2.760000 -1.640000 1.920000 3.040000 4.470000 4.660000 5.830000 7.340000 8.430000 

