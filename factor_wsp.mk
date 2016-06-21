.PHONY: clean All

All:
	@echo ----------Building project:[ factor - Release ]----------
	@"$(MAKE)" -f "factor.mk"
clean:
	@echo ----------Cleaning project:[ factor - Release ]----------
	@"$(MAKE)" -f "factor.mk" clean
