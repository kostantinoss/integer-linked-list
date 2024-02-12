out_file := "demo"

list: list.c main.c
	gcc -o $(out_file) main.c list.c

clean:
	rm -f $(out_file) 