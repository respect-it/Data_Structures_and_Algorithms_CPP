
## Задача 4.
Пипи има *N* чорапчета. Сред тях няма две еднакви по цвят. Освен това, чорапите се отличават един от друг и по дължина. Всеки ден Пипи избира нова двойка чорапи от <img src="https://latex.codecogs.com/svg.latex?\Large&space;{{N}\choose{2}}{\:}{=}{\:}\frac{N!}{2!(N-2)!}=\frac{N(N-1)}{2}"> варианта. Тя не иска да се повтарят и след като всички варианти били изпробвани, Пипи решила да изхвърли старите чорапи и да си купи нови. За да не допуска случайно повторение, тя подредила различните варианти в *нарастващ ред на разликата между дължините на двата чорапа*. При равна разлика – в нарастващ ред на дължината на по-късия чорап в двойката. В *K*-тия ден Пипи решила да обуе *K*-тия вариант двойка чорапи от този нареден списък.

Напишете програма *sock*, която намира коя двойка чорапи трябва да обуе Пипи в *K*-я ден, ако следва описаните правила.
#### Входен формат
На първия ред на стандартния вход са записани две цели числа *N* и *K* – брой на чорапите и номер на деня. На втория ред са записани *N* цели числа – дължините на чорапите в нарастващ ред. Числата са разделени с един интервал.

#### Ограничения
<img src="https://latex.codecogs.com/svg.latex?\Large&space;3\le{N}\le{1000}"> <br>
<img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{K}\le{\frac{N(N-1)}{2}}"><br>
<img src="https://latex.codecogs.com/svg.latex?\Large&space;3\le"> дължината на чорапите <img src="https://latex.codecogs.com/svg.latex?\Large&space;\le{10^9}">

#### Изходен формат
На един ред на стандартния изход програмата трябва да изведе две цели числа, разделени с един интервал – дължината на чорапите, които трябва да избере Пипи в K-я ден. Първо се извежда дължината на по-късия чорап, после на по-дългия.

Примеreн вход|Oчакван изход
-|-
4 5<br>1 7 8 12|1 8

Обяснение на примера: Пипи ще обува чорапи в следния ред - (7,8), (8,12), (7,12), (1,7), (1,8), (1,12).
