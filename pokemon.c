#include <stdio.h>
#include <string.h>

void header(){
    printf("                                 ,'\\ \n");
    printf("     _.----.      ____         ,'  _\\    ___    ___     ____\n");
    printf(" _,-'       `.   |    |  /`.   \\,-'     |   \\  /   |   |    \\  |`.\n");
    printf("\\      __    \\   '-.  | /   `.   ___    |    \\/    |   '-.   \\ |  |\n");
    printf(" \\.    \\ \\   | __  |  |/    ,' ,'_  `.  |          | __  |    \\|  |\n");
    printf("  \\     \\/   /,'_`.|      ,'  / / / /   |          ,' _`.|     |  |\n");
    printf("   \\     ,-'/  /   \\    ,'   |  \\/ / ,`.|         /  /   \\  |     |\n");
    printf("    \\    \\ |   \\_/  |   `-.  \\     `' / |  |    ||   \\_/  | |\\    |\n");
    printf("     \\    \\ \\      /       `-.`.___,-'  |  |\\  /| \\      /  | |   |\n");
    printf("      \\    \\ `.__,'|  |`-._     `|      |__| \\/ |  `.__,'|  | |   |\n");
    printf("       \\_.-'       |__|    `-._  |              '-.|     '-.| |   |\n");
    printf("                               `'                             '-._|\n\n");
}
int
selection(int nPoke, char Poke[]){
    switch(nPoke){
        case 1: strcpy(Poke, "Entei");
            break;
        case 2: strcpy(Poke, "Milotic");
            break;
        case 3: strcpy(Poke, "Torterra");
            break;
        case 4: strcpy(Poke, "Pikachu");
            break;
        case 5: strcpy(Poke, "Groudon");
            break;
        case 6: strcpy(Poke, "Lapras");
            break;
        case 7: strcpy(Poke, "Stunfisk");
            break;
    }
    return Poke[10];
}
char firstmove(int nPoke, char move[]){
    switch(nPoke){
        case 1: strcpy(move, "Fire Blast");
            break;
        case 2: strcpy(move, "Scald");
            break;
        case 3: strcpy(move, "Dig");
            break;
        case 4: strcpy(move, "Thunderbolt");
            break;
        case 5: strcpy(move, "Fissure");
            break;
        case 6: strcpy(move, "Ice Beam");
            break;
        case 7: strcpy(move, "Water Gun");
            break;
    }
    return move[15];
}
char secondmove(int nPoke, char move[]){
    switch(nPoke){
        case 1: strcpy(move, "Earthquake");
            break;
        case 2: strcpy(move, "Ice Beam");
            break;
        case 3: strcpy(move, "Leaf Storm");
            break;
        case 4: strcpy(move, "Dig");
            break;
        case 5: strcpy(move, "Fire Blast");
            break;
        case 6: strcpy(move, "Scald");
            break;
        case 7: strcpy(move, "Earthquake");
            break;
    }
    return move[15];
}
int health(int nPoke, int health){
    switch(nPoke){
        case 1: health = 150;
            break;
        case 2: health = 200;
            break;
        case 3: health = 220;
            break;
        case 4: health = 120;
            break;
        case 5: health = 150;
            break;
        case 6: health = 190;
            break;
        case 7: health = 130;
            break;
    }
    return health;
}
int bpskill(char move[], int bp){
    if(strcmp(move, "Fire Blast") == 0)
        bp = 30;
    else if(strcmp(move, "Scald") == 0)
        bp = 20;
    else if(strcmp(move, "Dig") == 0)
        bp = 20;
    else if(strcmp(move, "Thunderbolt") == 0)
        bp = 10;
    else if(strcmp(move, "Fissure") == 0)
        bp = 40;
    else if(strcmp(move, "Ice Beam") == 0)
        bp = 20;
    else if(strcmp(move, "Water Gun") == 0)
        bp = 10;
    else if(strcmp(move, "Earthquake") == 0)
        bp = 30;
    else if(strcmp(move, "Leaf Storm") == 0)
        bp = 40;
    return bp;
}
int ppskill(char move[], int pp){
    if(strcmp(move, "Fire Blast") == 0)
        pp = 5;
    else if(strcmp(move, "Scald") == 0)
        pp = 7;
    else if(strcmp(move, "Dig") == 0)
        pp = 7;
    else if(strcmp(move, "Thunderbolt") == 0)
        pp = 10;
    else if(strcmp(move, "Fissure") == 0)
        pp = 5;
    else if(strcmp(move, "Ice Beam") == 0)
        pp = 7;
    else if(strcmp(move, "Water Gun") == 0)
        pp = 10;
    else if(strcmp(move, "Earthquake") == 0)
        pp = 5;
    else if(strcmp(move, "Leaf Storm") == 0)
        pp = 5;
    return pp;
}
int fight(float health, float bp, int move, int nPoke1, int nPoke2){
    int type1 = 0, type2 = 0;   // 1-fire, 2-water, 3-grass
    int stype1 = 0, stype2 = 0; // 4-electric, 5-ground, 6-ice
    float temp=1, temp2=1, temp3=1;
    
    if(nPoke1 == 1){
        if(move == 1)
            temp = 1.5;
        type1 = 1;
    }
    else if(nPoke1 == 2){
        if(move == 1)
            temp = 1.5;
        type1 = 2;
    }
    else if(nPoke1 == 3){
        if(move == 1 || move == 2)
            temp = 1.5;
        type1 = 3;
        type2 = 5;
    }
    else if(nPoke1 == 4){
        if(move == 1)
            temp = 1.5;
        type1 = 4;
    }
    else if(nPoke1 == 5){
        if(move == 1)
            temp = 1.5;
        type1 = 5;
    }
    else if(nPoke1 == 6){
        if(move == 1 || move == 2)
            temp = 1.5;
        type1 = 6;
        type2 = 2;
    }
    else if(nPoke1 == 7){
        if(move == 2)
            temp = 1.5;
        type1 = 5;
        type2 = 4;
    }
    if(nPoke2 == 1){
        stype1 = 1;
    }
    else if(nPoke2 == 2){
        stype1 = 2;
    }
    else if(nPoke2 == 3){
        stype1 = 3;
        stype2 = 5;
    }
    else if(nPoke2 == 4){
        stype1 = 4;
    }
    else if(nPoke2 == 5){
        stype1 = 5;
    }
    else if(nPoke2 == 6){
        stype1 = 6;
        stype2 = 2;
    }
    else if(nPoke2 == 7){
        stype1 = 5;
        stype2 = 4;
    }
    if(type1 == 1){
        if(stype1 == 1 || stype1 == 2 || stype1 == 5)
            temp2 = 0.5;
        else if(stype1 == 3 || stype1 == 6)
            temp2 = 2;
        else if(stype1 == 4)
            temp2 = 1;
        
        if(stype2 == 1 || stype2 == 2 || stype2 == 5)
            temp3 = 0.5;
        else if(stype2 == 3 || stype2 == 6)
            temp3 = 2;
        else if(stype2 == 4)
            temp3 = 1;
    }
    else if(type1 == 2){
        if(stype1 == 2 || stype1 == 3)
            temp2 = 0.5;
        else if(stype1 == 1 || stype1 == 5)
            temp2 = 2;
        else if(stype1 == 4 || stype1 == 6)
            temp2 = 1;
        
        if(stype2 == 2 || stype2 == 3)
            temp3 = 0.5;
        else if(stype2 == 1 || stype2 == 5)
            temp3 = 2;
        else if(stype2 == 4 || stype2 == 6)
            temp3 = 1;
    }
    else if(type1 == 3){
        if(stype1 == 1 || stype1 == 3)
            temp2 = 0.5;
        else if(stype1 == 2 || stype1 == 5)
            temp2 = 2;
        else if(stype1 == 4 || stype1 == 6)
            temp2 = 0;
        
        if(stype2 == 1 || stype2 == 3)
            temp3 = 0.5;
        else if(stype2 == 2 || stype2 == 5)
            temp3 = 2;
        else if(stype2 == 4 || stype2 == 6)
            temp3 = 0;
    }
    else if(type1 == 4){
        if(stype1 == 1 || stype1 == 4 || stype1 == 6)
            temp2 = 1;
        else if(stype1 == 2)
            temp2 = 2;
        else if(stype1 == 3)
            temp2 = 0.5;
        else if(stype1 == 5)
            temp2 = 0;
        
        if(stype2 == 1 || stype2 == 4 || stype2 == 6)
            temp3 = 1;
        else if(stype2 == 2)
            temp3 = 2;
        else if(stype2 == 3)
            temp3 = 0.5;
        else if(stype2 == 5)
            temp3 = 0;
    }
    else if(type1 == 5){
        if(stype1 == 2 || stype1 == 3 || stype1 == 6)
            temp2 = 0.5;
        else if(stype1 == 1 || stype1 == 4)
            temp2 = 2;
        else if(stype1 == 5)
            temp2 = 1;
        
        if(stype2 == 2 || stype2 == 3 || stype2 == 6)
            temp3 = 0.5;
        else if(stype2 == 1 || stype2 == 4)
            temp3 = 2;
        else if(stype2 == 5)
            temp3 = 1;
    }
    else if(type1 == 6){
        if(stype1 == 1)
            temp2 = 0.5;
        else if(stype1 == 2 || stype1 == 3 || stype1 == 5)
            temp2 = 2;
        else if(stype1 == 4 || stype1 == 6)
            temp2 = 1;
        
        if(stype2 == 1)
            temp3 = 0.5;
        else if(stype2 == 2 || stype2 == 3 || stype2 == 5)
            temp3 = 2;
        else if(stype2 == 4 || stype2 == 6)
            temp3 = 1;
    }
    printf("hp: %f, bp: %f, temp: %f, temp2: %f, temp3: %f", health, bp, temp, temp2, temp3);
    health = health - (bp * temp * temp2 * temp3);
    return health;
}
int main()
{
    pikachu();
    int game = 1;
    int choice = 0;
    int nPoke1, nPoke2;
    char Pokemon1[10], Pokemon2[10];
    char Pokem1[15], Pokem2[15];
    char sPokem1[15], sPokem2[15];
    float hp1, hp2, shp1, shp2;       // health
    float bp1, pp1, sbp1, spp1;       // 1st move
    float bp2, pp2, sbp2, spp2;       // 2nd move
    int pp3 = 5, spp3 = 5;          // 3rd move
    int pp4 = 5, spp4 = 5;          // 4th move
    int warning = 0, pro1 = 0, pro2 = 0, cbp = 0, scbp = 0;
    header();
    printf ("***************** POKEMON 1v1 BATTLE SIMULATOR!!! *****************\n\n");
    printf ("Choose Your Pokemon!!\n");
    printf ("  1. Entei\n");
    printf ("  2. Milotic\n");
    printf ("  3. Torterra\n");
    printf ("  4. Pikachu\n");
    printf ("  5. Groudon\n");
    printf ("  6. Lapras\n");
    printf ("  7. Stunfisk\n\n");
    do{
        printf("Player 1, please select a Pokemon: ");
        scanf("%d", &nPoke1);
    }while (nPoke1 < 1 || nPoke1 > 7);
    selection(nPoke1, Pokemon1);
    printf("Player 1 has selected %s\n\n", Pokemon1);
    do{
        printf("Player 2, please select a Pokemon: ");
        scanf("%d", &nPoke2);
    }while (nPoke2 < 1 || nPoke2 > 7);
    selection(nPoke2, Pokemon2);
    printf("Player 2 has selected %s\n\n", Pokemon2);
    printf("*******************************************************************\n\n");
    firstmove(nPoke1, Pokem1);
    secondmove(nPoke1, Pokem2);
    firstmove(nPoke2, sPokem1);
    secondmove(nPoke2, sPokem2);
    //first player
    hp1 = health(nPoke1, hp1);
    hp2 = health(nPoke1, hp2);
    bp1 = bpskill(Pokem1, bp1);
    pp1 = ppskill(Pokem1, pp1);
    bp2 = bpskill(Pokem2, bp2);
    pp2 = ppskill(Pokem2, pp2);
    //second player
    shp1 = health(nPoke2, shp1);
    shp2 = health(nPoke2, shp2);
    sbp1 = bpskill(sPokem1, sbp1);
    spp1 = ppskill(sPokem1, spp1);
    sbp2 = bpskill(sPokem2, sbp2);
    spp2 = ppskill(sPokem2, spp2);
    do{
        printf("%s: %.f/%.f HP\n", Pokemon1, hp1, hp2);
        printf("%s: %.f/%.f HP\n\n", Pokemon2, shp1, shp2);
        if (game % 2 == 1){
            printf("%s's move are: \n", Pokemon1);
            printf("  1 - %s (%.f BP, %.f PP)\n", Pokem1, bp1, pp1);
            printf("  2 - %s (%.f BP, %.f PP)\n", Pokem2, bp2, pp2);
            printf("  3 - Protect (%d PP)\n", pp3);
            printf("  4 - Charge Up (%d PP)\n\n", pp4);
            game++;
            if(pp1 != 0 || pp2 != 0 || pp3 != 0 || pp4 != 0){
                do{
                    printf("Player 1, select a move: ");
                    scanf("%d", &choice);
                    warning = 0;
                    if (choice == 1){
                        if(pp1 > 0){
                            pp1--;
                            if (pro2 == 0)
                                shp1 = fight(shp1, bp1, choice, nPoke1, nPoke2);
                            if (cbp == 1){
                                bp1 /=2;
                                bp2 /=2;
                            }
                            pro2 = 0;
                        }
                        else warning = 1;
                    }
                    else if (choice == 2){
                        if(pp2 > 0){
                            pp2--;
                            if (pro2 == 0)
                                shp1 = fight(shp1, bp2, choice, nPoke1, nPoke2);
                            if (cbp == 1){
                                bp1 /=2;
                                bp2 /=2;
                            }
                            pro2 = 0;
                        }
                        else warning = 1;
                    }
                    else if (choice == 3){
                        if(pp3 > 0 && pro1 == 0){
                            pp3--;
                            pro1 = 1;
                        }
                        else warning = 1;
                    }
                    else if (choice == 4){
                        if(pp4 > 0){
                            pp4--;
                            pro2 = 0;
                            if (cbp == 0){
                                bp1 *=2;
                                bp2 *=2;
                                cbp = 1;
                            }
                        }
                        else warning = 1;
                    }
                    if(warning == 1 && pro1 == 1){
                        printf("\nYou selected Protect last turn,\n");
                        printf("you cannot Protect this turn\n\n");
                    }
                    else if(choice < 1 || choice > 4)
                        printf("\nChoose a move number from 1 to 4!\n\n");
                    else if (warning == 1)
                        printf("\nThat move has 0 PP.\n");
                }while(warning == 1 || (choice < 1 || choice > 4));
            }
            else{
                printf("Sadly, you dont have enough PP,\n");
                printf("you will be damaged by 5 HP and 10 HP for your opponent\n");
                hp1 -= 5;
                shp1 -= 10;
            }
        }
        else if (game % 2 == 0){
            printf("%s's move are: \n", Pokemon2);
            printf("  1 - %s (%.f BP, %.f PP)\n", sPokem1, sbp1, spp1);
            printf("  2 - %s (%.f BP, %.f PP)\n", sPokem2, sbp2, spp2);
            printf("  3 - Protect (%d PP)\n", spp3);
            printf("  4 - Charge Up (%d PP)\n\n", spp4);
            game++;
            if(spp1 != 0 || spp2 != 0 || spp3 != 0 || spp4 != 0){
                do{
                    warning = 0;
                    printf("Player 2, select a move: ");
                    scanf("%d", &choice);
                    if (choice == 1){
                        if(spp1 > 0){
                            spp1--;
                            if (pro1 == 0)
                                hp1 = fight(hp1, sbp1, choice, nPoke2, nPoke1);
                            if (scbp == 1){
                                sbp1 /=2;
                                sbp2 /=2;
                            }
                            pro1 = 0;
                        }
                        else warning = 1;
                    }
                    else if (choice == 2){
                        if(spp2 > 0){
                            spp2--;
                            if (pro1 == 0)
                                hp1 = fight(hp1, sbp2, choice, nPoke2, nPoke1);
                            if (scbp == 1){
                                sbp1 /=2;
                                sbp2 /=2;
                            }
                            pro1 = 0;
                        }
                        else warning = 1;
                    }
                    else if (choice == 3){
                        if(spp3 > 0 && pro2 == 0){
                            spp3--;
                            pro2 = 1;
                        }
                        else warning = 1;
                    }
                    else if (choice == 4){
                        if(spp4 > 0){
                            spp4--;
                            pro1 = 0;
                            if (scbp == 0){
                                sbp1 *=2;
                                sbp2 *=2;
                                scbp = 1;
                            }
                        }
                        else warning = 1;
                    }
                    if((warning == 1 && pro2 == 1) || (warning == 1 && pro1 == 1)){
                        printf("\nYou selected Protect last turn,\n");
                        printf("you cannot Protect this turn\n\n");
                    }
                    else if(choice < 1 || choice > 4)
                        printf("\nChoose a move number from 1 to 4!\n\n");
                }while(warning == 1 || (choice < 1 || choice > 4));
            }
            else{
                printf("Sadly, you dont have enough PP,\n");
                printf("you will be damaged by 5 HP and 10 HP for your opponent\n");
                shp1 -= 5;
                hp1 -= 10;
            }
        }
        printf("\n**************************************************\n\n");
    }while (hp1 > 0 && shp1 > 0);
    
    if(hp1 <= 0){
        printf("The Pokemon of Player 1 has 0 HP!\n");
        printf("Player 2 wins!\n\n");
    }
    else if(shp1 <= 0){
        printf("The Pokemon of Player 2 has 0 HP!\n");
        printf("Player 1 wins!\n\n");
    }
    printf("**************************************************\n\n");
    printf("Press any key to exit...");
    return 0;
}
