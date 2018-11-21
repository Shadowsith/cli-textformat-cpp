test: 
	mkdir -p ./bin
	g++ ./src/textformatpp.cpp test.cpp -o bin/test

clean:
	rm -r ./bin
