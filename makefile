all:
	g++ main.cpp add_so.cpp -o run

# g++ main.cpp `pkg-config opencv --cflags --libs` -o run
# .so
