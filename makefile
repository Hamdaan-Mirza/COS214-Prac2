
all: TestingMain

TestingMain:  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp
	g++ -o TestingMain TestingMain.cpp  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp -std=c++11

clean: 
	rm -f TestingMain

run: TestingMain
	./TestingMain

DemoMain:  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp
	g++ -o DemoMain DemoMain.cpp  -std=c++11
	./DemoMain