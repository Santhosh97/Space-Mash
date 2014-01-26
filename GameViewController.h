//
//  GameViewController.h
//  Tech Fair
//
//  Created by Santhosh Subramanian on 1/24/14.
//  Copyright (c) 2014 Santhosh Subramanian. All rights reserved.
//

#import <UIKit/UIKit.h>


int ShipMovement;
int BulletMovement;
int BulletsOnScreen;
int MonstersKilled;
BOOL Monster1Hit;
BOOL Monster2Hit;
BOOL Monster3Hit;
BOOL Monster4Hit;
BOOL Monster5Hit;
BOOL Monster6Hit;
BOOL Monster7Hit;
BOOL Monster8Hit;
int MonsterShooterStart;
int MonsterMovement;






@interface GameViewController : UIViewController
{
    
    IBOutlet UIButton *Start;
    IBOutlet UIButton *Exit;
    IBOutlet UIButton *Shoot;
    
    IBOutlet UIImageView *Ship;
    IBOutlet UIImageView *Bullet;
    
    IBOutlet UIImageView *Monster1;
    IBOutlet UIImageView *Monster2;
    IBOutlet UIImageView *Monster3;
    IBOutlet UIImageView *Monster4;
    IBOutlet UIImageView *Monster5;
    IBOutlet UIImageView *Monster6;
    IBOutlet UIImageView *Monster7;
    IBOutlet UIImageView *Monster8;

    IBOutlet UIImageView *MonsterBullet;
    IBOutlet UIImageView *MonsterBullet2;
    IBOutlet UIImageView *MonsterBullet3;
    
    IBOutlet UILabel *Lose;
    IBOutlet UILabel *Win;
    IBOutlet UILabel *Try;
    
    
    
    
    
    
    
    NSTimer *movementTimer;
    
}

-(IBAction)Start:(id)sender;
-(IBAction)Shoot:(id)sender;
-(void)Movement;
-(void)Collision;
-(void)MonsterKilled;
-(void)GameOver;
-(void)MonsterMoveDown;



@end
