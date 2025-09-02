
all: TestingMain

TestingMain:  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp DiscountStrategy.cpp Menus.cpp Observer.cpp Order.cpp OrdrerState.cpp
	g++ -o TestingMain TestingMain.cpp  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp DiscountStrategy.cpp Menus.cpp Observer.cpp Order.cpp OrdrerState.cpp -std=c++11

clean: 
	rm -f TestingMain

run: TestingMain
	./TestingMain

DemoMain:  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp DiscountStrategy.cpp Menus.cpp Observer.cpp Order.cpp OrdrerState.cpp
	g++ -o DemoMain DemoMain.cpp  PizzaComponent.cpp ToppingGroup.cpp Topping.cpp Pizza.cpp BasePizza.cpp PizzaDecorator.cpp StuffedCrust.cpp ExtraCheese.cpp DiscountStrategy.cpp Menus.cpp Observer.cpp Order.cpp OrdrerState.cpp -std=c++11
	./DemoMain