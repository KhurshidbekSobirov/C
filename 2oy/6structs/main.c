#include <stdio.h>
#include <stdlib.h>

/**
 * Car struct.
 */
typedef struct CarInfo {
    char model[30];
    float price;
    int max_speed;
} Car;

/**
 * This function fills array with data
 * 
 * @param int count - count of cars
 * @param Car cars - struct array of cars
 */
void fill_data (int count, Car cars[]);

/**
 * This function prints array with data
 * 
 * @param int count - count of cars
 * @param Car cars - struct array of cars
 */
void print_data (int count, Car cars[]);

void fill (int count, Car cars[]);

int main () {
    Car *cars;
    int count;

    printf("How many cars do you want to register? ");
    scanf("%d", &count);

    cars = (Car *) malloc(count * sizeof(Car));
    fill_data(count, cars);
    print_data(count,cars);
    fill(count,cars);
   
    return 0;
}

void fill_data (int count, Car cars[]) {
    for (int i = 0; i < count; i++)
    {
        printf("FILL DATA FOR %d CAR\n", i + 1);
        printf("Enter model: ");
        scanf("%s", cars[i].model);
        printf("Enter price: ");
        scanf("%f", &cars[i].price);
        printf("Enter maximal speed: ");
        scanf("%d", &cars[i].max_speed);
        printf("\nDATA HAS BEEN SAVED\n");
    }
}

void print_data (int count, Car cars[]){

   
    printf("| %2s | %-30s | %6s | %s |\n","NO","Model","Price","Max speed");

    for (int j = 0; j < count; j++)
    {
        printf("| %2d | %-30s | %6f | %d |\n", j + 1, cars[j].model, cars[j].price, cars[j].max_speed);
    }
    


}

void fill(int count,Car cars[]){

    FILE *file;

    file = fopen("data.txt","w");
        fprintf(file,"| %2s | %-30s | %6s | %s |\n","NO","Model","Price","Max speed");

    for (int j = 0; j < count; j++)
    {
        fprintf(file,"| %2d | %-30s | %.2f | %3d |\n", j + 1, cars[j].model, cars[j].price, cars[j].max_speed);
    }
    
    fclose(file);


}