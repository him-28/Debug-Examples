all: bounds invalid_free

bounds: bounds.c 
	gcc -g -O0 bounds.c -o bounds

invalid_free: invalid_free.c
	gcc -g -O0 invalid_free.c -o invalid_free

clean:
	rm invalid_free bounds
