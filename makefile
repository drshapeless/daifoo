daifoo:
	$(MAKE) -w -C src; cp src/daifoo bin/

.PHONY: clean
clean:
	$(MAKE) -w -C src clean
