//
//  ViewController.m
//  Tech Fair
//
//  Created by Santhosh Subramanian on 1/24/14.
//  Copyright (c) 2014 Santhosh Subramanian. All rights reserved.
//

#import "ViewController.h"


@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Configure the view.
    SKView * skView = (SKView *)self.view;
    
   
    
    // Create and configure the scene.
    
   
}

- (BOOL)shouldAutorotate
{
    return YES;
}

- (NSUInteger)supportedInterfaceOrientations
{
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        return UIInterfaceOrientationMaskAllButUpsideDown;
    } else {
        return UIInterfaceOrientationMaskAll;
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Release any cached data, images, etc that aren't in use.
}

@end
