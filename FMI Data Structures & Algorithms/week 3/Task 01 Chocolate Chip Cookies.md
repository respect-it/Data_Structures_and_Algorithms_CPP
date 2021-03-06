## Задача 1.
В един хубав слънчев ден на Пепи и сe дояли шоколадови бисквити. Tя решила да отскочи до най-близкия магазин за шоколадови изделия, за да си вземе от любимите шоколадови бисквити. Когато стигнала до магазина, тя взела бързо 1 кутия и ги сложила на касата. Тя забелязала че подредбата на бисквитите в кутията била много интересна. Във всяко отделение имало толкова на брой бисквити, колкото бил номерът на отделението. В отделение 1 имало 1 бисквита, в отделение 2 имало 2 бисквити, в отделение 3 имало 3 бисквити и т.н. Тя решила всеки ден да си намисля едно число *p* и във всяко отделение, в което има поне *p* бисквити, да изяжда *p* бисквити. Напишете програма, която по подаден брой на отделенията *N*, да отпечатва на конзолата за колко най-малко дни Пепи ще изяде бисквитите.

#### Входен формат
Въвежда се <img src="https://latex.codecogs.com/svg.latex?\Large&space;T"> - брой на тестове. <img src="https://latex.codecogs.com/svg.latex?\Large&space;(T\le{1000})"><br>
От следващите <img src="https://latex.codecogs.com/svg.latex?\Large&space;T"> реда по едно число <img src="https://latex.codecogs.com/svg.latex?\Large&space;N"> броят на разделенията в кутията.

#### Ограничения
<img src="https://latex.codecogs.com/svg.latex?\Large&space;T\le{1000}"><br>
<img src="https://latex.codecogs.com/svg.latex?\Large&space;N\le{10000}">

#### Изходен формат
За всеки тест - минималният брой дни, за които Пепи може да изяде шоколадовите бисквити.

Примерен вход|Очакван изход
-|-
2<br>3<br>4|2<br>3

*Пояснение за тест #2:*

Едно възможно решение за кутия с 4 разделения:

Ден 0: Начален брой бисквити: 1 2 3 4<br>
Ден 1: ( Пепи решава да изяде 2 бисквити ) => 1 0 1 2<br>
Ден 2: ( Пепи решава да изяде 1 бисквита ) => 0 0 0 1<br>
Ден 3: ( Пепи решава да изяде 1 бисквита ) => 0 0 0 0<br>
Общо за 3 дни Пепи изяжда всичките бисквити.

