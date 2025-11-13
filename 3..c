#include <stdio.h>

void modifySector(int grid[3][3]) {
    int row, col, flag, action;
    printf("Enter sector coordinates (row col): ");
    scanf("%d %d", &row, &col);

    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        printf("Invalid grid location.\n");
        return;
    }

    printf("Choose status type: 0=Power  1=Overload  2=Maintenance: ");
    scanf("%d", &flag);
    printf("Enter action (1=Activate, 0=Deactivate): ");
    scanf("%d", &action);

    if (action == 1)
        grid[row][col] |= (1 << flag);
    else
        grid[row][col] &= ~(1 << flag);

    printf("Sector updated successfully.\n");
}

void checkSector(int grid[3][3]) {
    int row, col;
    printf("Enter sector coordinates (row col): ");
    scanf("%d %d", &row, &col);

    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        printf("Invalid grid location.\n");
        return;
    }

    int value = grid[row][col];
    printf("\nStatus for Sector (%d,%d):\n", row, col);
    printf("Power: %s\n", (value & 1) ? "ON" : "OFF");
    printf("Overload: %s\n", (value & 2) ? "DETECTED" : "NORMAL");
    printf("Maintenance: %s\n", (value & 4) ? "PENDING" : "CLEAR");
}

void runDiagnostics(int grid[3][3]) {
    int overloads = 0, maintenance = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] & 2)
                overloads++;
            if (grid[i][j] & 4)
                maintenance++;
        }
    }

    printf("\nSystem Diagnostic Summary\n");
    printf("Total Overloaded Sectors: %d\n", overloads);
    printf("Total Maintenance Flags: %d\n", maintenance);
}

int main() {
    int grid[3][3] = {0};
    int option;

    do {
        printf("\nPower Grid Management\n");
        printf("1. Modify Sector Status\n");
        printf("2. View Sector Info\n");
        printf("3. Run Diagnostics\n");
        printf("4. Exit Program\n");
        printf("Choose option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                modifySector(grid);
                break;
            case 2:
                checkSector(grid);
                break;
            case 3:
                runDiagnostics(grid);
                break;
            case 4:
                printf("System shutting down...\n");
                break;
            default:
                printf("Invalid option selected.\n");
        }
    } while (option != 4);

    return 0;
}

