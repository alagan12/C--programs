#include <stdio.h>
int registation();
int rule();
int issue();
int information();

int main()
{
    printf("Enter 1 to register vehicle\n");
    printf("Enter 2 to see traffic rule\n");
    printf("Enter 3 to report any issue\n");
    printf("Enter 4 to search vehicle information\n");

    int a;
    printf("enter any number");
    scanf("%d", &a);
    if (a == 1)
        registation();
    else if (a == 2)
        rule();
    else if (a == 3)
        issue();
    else if (a == 4)
        information();
    else
        printf("back");
}
int registation()
{
    int vehicleNumber, phoneNumber;
    char ownerName, vehicalType;
    printf("enter vehical number:\n");
    scanf("%d", &vehicleNumber);
    printf("Enter Vehicle Owner's Name:\n");
    scanf(" %c", &ownerName);
    printf("enter phone number:\n");
    scanf("%d", &phoneNumber);
    printf("enter vehical type:");
    scanf(" %c", &vehicalType);
    printf("vehical number: %d", vehicleNumber);
    printf("owener name: %c", ownerName);
    printf("phone number :%d", phoneNumber);
    printf("vehical type: %c", vehicalType);
    return 0;
}
int rule()
{
    printf("1.If a vehicle is being looked into by the police, it will be updated on the online portal.\n");
    printf("2.No physical verification of documents is required. If the police need to suspend your driver's license, they can do so through the available online portals.\n");
    printf("3.According to the new traffic regulations, the driver's behaviour will be recorded and updated by the authorities in an online portal.\n");
    printf("4.Electronic challans will be issued for those who violate the traffic rules.\n");
    printf("5.According to the new traffic regulations, it is not mandatory to have copies of documents. You can carry a digital copy of all documents related to your vehicle.\n");
    return 0;
}
int issue()
{
    printf("Call on the number 91499920\n");
    printf("email at abc@gmail.com\n");
    return 0;
}
int information()
{
    int a[100];
}