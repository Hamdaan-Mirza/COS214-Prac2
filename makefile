
all: TestingMain

TestingMain:  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp DiscountStrategy.cpp Menus.cpp Observer.cpp Order.cpp OrdrerState.cpp
	g++ -o TestingMain TestingMain.cpp  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp DiscountStrategy.cpp Menus.cpp Observer.cpp Order.cpp OrdrerState.cpp -std=c++11

clean: 
	rm -f TestingMain

coverage:
	make clean
	g++ -g --coverage -dumpbase '' *.cpp -o TestingMain
	./TestingMain > output.txt
	gcov -f -m -r -j main > coverage.txt 
	gcovr --html-details output.html
	
run: TestingMain
	./TestingMain

DemoMain:  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp DiscountStrategy.cpp Menus.cpp Observer.cpp Order.cpp OrdrerState.cpp
	g++ -o DemoMain DemoMain.cpp  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp DiscountStrategy.cpp Menus.cpp Observer.cpp Order.cpp OrdrerState.cpp -std=c++11
	./DemoMain
