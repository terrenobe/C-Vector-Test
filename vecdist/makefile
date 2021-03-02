driver: driver.o vector.o
	g++ -o driver driver.o vector.o;

driver.o: driver.cpp vector.h
	g++ -c driver.cpp;

vector.o: vector.cpp vector.h
	g++ -c vector.cpp;

clean:
	/bin/rm -rf *.o driver
