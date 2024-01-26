# Задача 51

## Дано
Определить знаменатель относительной погрешности определения периметра полигона, состоящего из 5 сторон примерно одинаковой длины, если относительная ошибка измерения лентой всех сторон одинаковая и равна 1/3000.



## Найти

Tu-?

## Решение

$$   \frac{1}{T\vartheta } = \frac{1}{3000} = \frac{1}{\frac{D}{m\vartheta }}   $$ 

$$    m\vartheta  = \frac{D}{T\vartheta } = \frac{D}{3000}   $$ 

$$   D = D_{1} + D_{2}+D_{3}+D_{4}+D_{5}   $$ 

$$   F = f(a,b)   $$ 

$$   m^{2}_{\sigma } = \left ( \frac{df}{dD_{1}} \right ) * m_{\sigma }^{2} +  \left ( \frac{df}{dD_{2}} \right ) * m_{\sigma }^{2} + \left ( \frac{df}{dD_{3}} \right ) + m_{\sigma }^{2} + \left ( \frac{df}{dD_{4}} \right ) * m_{\sigma }^{2} + \left ( \frac{df}{dD_{5}} \right ) * m_{\sigma }^{2}   $$ 

$$   m_{\sigma }^{2} = 5 * m_{\sigma }^{2}    $$   

$$   m_{p} = \frac{\sqrt{5}}{3000}D    $$ 

$$   \frac{1}{T_{\sigma }} +\frac{1}{\frac{p}{m\sigma }}    $$ 

$$   T_{\sigma } = \frac{3000}{\sqrt{5D}} * (D_{1}+D_{2}+D_{3}+D_{4}+D_{5}) $$    

$$   D_{1}\approx  (D_{1}+D_{2}+D_{3}+D_{4}+D_{5})   $$ 

$$   T_{\sigma } = \frac{3000}{\sqrt{5D}} * 5 * D = \sqrt{5} * 3000 = 6708  $$ 

## Ответ

6708


