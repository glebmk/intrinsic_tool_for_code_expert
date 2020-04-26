MAIN := build/main

$(MAIN):
	$(CXX) main.cpp -o $(MAIN) -O3 -std=c++11 -fno-tree-vectorize -mavx2 -mfma

clean:
	$(RM) -r build/*

.PHONY: run
run: $(MAIN)
	./$(MAIN)
