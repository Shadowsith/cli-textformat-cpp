test: 
	mkdir -p ./bin
	g++ ./src/textformatpp.cpp test.cpp -o bin/test

run:
	make test
	./bin/test

clean:
	rm -r ./bin
