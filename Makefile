all: app

app: file1.c file2.c
	gcc file1.c file2.c -o app

run: app
	./app

clean:
	rm -f app
	
