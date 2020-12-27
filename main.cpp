#include <iostream>

int main() {
   std::cout<<"Введите выражение\n";
   std::cout<<"Можно использовать знаки +, -, *, /.\n";
   std::cout<<"Знаки * и / необходимо писать первыми, чтобы не нарушать правила математики.\n";
   std::cout<<"К концу выражения необходимо добавить x: (1+2+3x):";
   double lvalue = 0;
   double rvalue;
   std::cin>>lvalue; //считывает крайнее значение слева
   if(!std::cin){
       std::cerr<<"Первый операнд отсутсвует!";
   }
   for(char oper; std::cin >> oper;) //считывает переменную и значение справа
   {
       if(oper!= 'x'){
           std::cin>>rvalue;
       }
       if(!std::cin){
           std::cerr<<"Второй операнд отсутвует!";
       }
       switch (oper) {
           case '+': lvalue+=rvalue;
               break;
           case '-': lvalue-=rvalue;
               break;
           case '*': lvalue *=rvalue;
               break;
           case '/': lvalue /=rvalue;
               break;
           default:
               std::cout<<"Результат:"<< lvalue<< '\n';
               return 0;
       }
   }
   std::cerr<<"Неверное выражение!";
}
