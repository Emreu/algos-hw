INPUT_NAME=""
PROG_NAME="bin_solution"
SRC_NAME="solution.c"

all: build run clean
.PHONY: all

.PHONY: build
build:
	gcc -o ${PROG_NAME}0 -O0 ${SRC_NAME} -g
	gcc -o ${PROG_NAME}2 -O2 ${SRC_NAME} -g
	gcc -o ${PROG_NAME}3 -O3 ${SRC_NAME} -g
	@echo "[OK] Compiled successfully"
	@echo ""

.PHONY: exec_time
exec_time:
	time ./${PROG_NAME}0 ${INPUT_NAME}
	time ./${PROG_NAME}2 ${INPUT_NAME}
	time ./${PROG_NAME}3 ${INPUT_NAME}

.PHONY: clean
clean:
	rm ${PROG_NAME}*
	@echo "[OK] Cleanup finished"

.PHONY: run
run:
	./${PROG_NAME}3 ${INPUT_NAME}
	@echo "[OK] Finished successfully"
	@echo ""

