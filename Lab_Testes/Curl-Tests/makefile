#CC = 'curl-config --cc'
LIBS = -lcurl

curl-test: curl-test.o # curl-test is just the name of the file that i will work on
	$(CC) -g -o $@ $< $(LIBS)

curl-test.o: curl-test.c 
	$(CC) -g -c $<

clean:
	rm -f curl-test.o curl-test