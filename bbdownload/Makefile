CFLAGS+=-lcurl
CFLAGS+=-DDEBUG
main:main.c login.c video.c
	gcc main.c login.c ./cjson/cJSON.c video.c -o main $(CFLAGS)
