// menu driven program to calculate areas of square, cube, rectangle and cuboid using classes

#include <stdio.h>
class area{ 
    private:
    float __length, __breadth, __height; //initialisation of private variables
    public:
    area(){ //constructor initialisation
        __length = 1;
        __breadth = 1;
        __height = 1;
    }
    void setSquare(float length){ //setter function for square
        __length = length;
    }
    void setRectangle(float length, float breadth){ //setter function for rectangle
        __length = length;
        __breadth = breadth;
    }
    void setCube(float length){ //setter function for cube
        __length = length;
    }
    void setCuboid(float length, float breadth, float height){ //setter function for cuboid
        __length = length;
        __breadth = breadth;
        __height = height;
    }
    void getSquare(){ //getter function for square 
        printf("Area of Square: %f\n", __length*__length);
    }
    void getCube(){ //getter function for cube 
        printf("Surface Area of Cube: %f\n", 6*__length*__length);
    }
    void getRectangle(){ //getter function for rectangle
        printf("Area of Rectangle: %f\n", __length*__breadth);
    }
    void getCuboid(){ //getter function for cuboid
        printf("Surface Area of Cuboid: %f\n", 2*(__length*__breadth + __breadth*__height + __height*__length));
    }
};
int main(){
    int choice, stop = 0;
    float length, breadth, height;
    area Shape;
    while (stop==0){
        printf("\nMenu:\n1. Square\n2. Cube\n3. Rectangle\n4. Cuboid\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            printf("Enter side of square: ");
            scanf("%f", &length);
            Shape.setSquare(length);
            Shape.getSquare();
            break;
        case 2:
            printf("Enter side of cube: ");
            scanf("%f", &length);
            Shape.setCube(length);
            Shape.getCube();
            break;
        case 3:
            printf("Enter length of rectangle: ");
            scanf("%f", &length);
            printf("Enter breadth of rectangle: ");
            scanf("%f", &breadth);
            Shape.setRectangle(length, breadth);
            Shape.getRectangle();
            break;
        case 4:
            printf("Enter length of cuboid: ");
            scanf("%f", &length);
            printf("Enter breadth of cuboid: ");
            scanf("%f", &breadth);
            printf("Enter height of cuboid: ");
            scanf("%f", &height);
            Shape.setCuboid(length, breadth, height);
            Shape.getCuboid();
            break;
        case 5:
            stop = 1;
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid Choice.\n");
            break;
        }
    }
}
