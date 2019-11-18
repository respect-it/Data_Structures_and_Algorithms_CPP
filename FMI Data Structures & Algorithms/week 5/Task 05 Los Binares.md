## Los Binares 
[Los Binares Judge](https://www.hackerrank.com/contests/practice-5-sda/challenges/los-binares)

Los Binares е най-модерният град построен през 2020 в който няма имена на улици, защото е твърде трудно да се помнят, а всеки адрес е едно единствено число. За да е по-лесно навигирането от всеки блок може да се отиде директно до най-много 2 други. За всеки един блок Q: ако има блокове с адреси по-малки от адреса на Q - те са на ляво от Q, а ако има такива с адреси по-големи от Q - те са на дясно. Тъй като всеки блок има директна връзка най-много с 2 други, няма други възможности. Не е възможно да има блокове с еднакви адреси.

Най-големият онлайн магазин Maazon иска да прави доставки в този град и иска да му напишете алгоритъм, който да изчислява колко блока трябва да посети, за да достигне целта.

На входа ще получите последователността от адреси, които са използвани за построяването на града, като ако някой се опита да построи блок с адрес, който вече съществува не трябва да се случва нищо, защото всички блокове имат уникални адреси. След което ще получите заявките от Maazon.

#### Входен формат

<img src="https://latex.codecogs.com/svg.latex?\Large&space;N,К">- ще получите последователност от N адреса по които да построите града, след което ще получите K заявки от Maazon колко е отдалечен даден адрес от началният, където е офиса на Maazon

<img src="https://latex.codecogs.com/svg.latex?\Large&space;B_1,B_2,...,B_N"> - адресите по които трябва да построите града (ако 2 адреса се повтарят е валиден само първият)

<img src="https://latex.codecogs.com/svg.latex?\Large&space;R_1,R_2,...,R_K"> - адресите на които Maazon иска да доставя, за които трябва да определите на какво разстояние са от първата построена сграда. Първата построена сграда е на разстояние 0 от себе си :)

#### Ограничения
<img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{N}\le{10^5}"><br>
<img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{N}\le{10^5}"><br>
<img src="https://latex.codecogs.com/svg.latex?\Large&space;INT_MIN\le{B_i}\le{INT_MAX}"><br>
<img src="https://latex.codecogs.com/svg.latex?\Large&space;INT_MIN\le{R_i}\le{INT_MAX}">

#### Изходен формат

K - на брой реда, като на ред
е разстоянието от офиса на Maazon до адреса от заявка <img src="https://latex.codecogs.com/svg.latex?\Large&space;R_i">. Ако не съществува такъв адрес разстоянието е -1

#### Примери

Примерен вход|Oчакван изход
-|-
3 2<br>1 2 3<br>2 4|1<br>-1

Градът ще изглежда по следния начин
```
1 - офисът на Maazon
 \ 
  2
   \ 
    3
```
Следователно 1 е на разстояние 0. 2 е на разстояние 1. 3 е на разстояние 2. Съответно адреси, които не съществуват като 4 ще са -1.

Примерен вход|Oчакван изход
-|-
3 3<br>3 5 2<br>3 5 0|0<br>1<br>-1

Градът ще изглежда по следния начин
```
  3 - офисът на Maazon
 / \
2   5
```
Следователно 3 е на разстояние 0. 2 е на разстояние 1. 5 е на разстояние 1. Съответно адреси, които не съществуват като 0 ще са -1.