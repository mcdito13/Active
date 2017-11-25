active.x: Active.o
	g++ -std=c++11 Active.o -o active.x

Active.o: Active.cpp Activity.hpp Cardio.hpp Weights.hpp User.hpp
	g++ -std=c++11 -c Active.cpp -o Active.o

run:
	make
	./active.x

clean:
	rm -f *.[ox]