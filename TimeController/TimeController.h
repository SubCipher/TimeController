//
//  TimeController.h
//  TimeController
//
//  Created by MacMan on 10/29/15.
//  Copyright © 2015 MacManApp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TimeController : NSObject
//The repeating timer is a weak property

@property (weak) NSTimer *repeatingTimer;
@property (strong) NSTimer *unregisteredTimer;
@property NSUInteger timerCount;

-(IBAction)startOneOffTimer:sender;


-(IBAction)startRepeatingTimer:sender;
-(IBAction)stopRepeatingTimer:sender;


-(IBAction)createUnregisteredTimer:sender;
-(IBAction)startUnregisteredTimer:sender;
-(IBAction)stopUnregisteredTimer:sender;


-(IBAction)startFireDateTimer:sender;


-(void)targetMethod: (NSTimer *)theTimer;
-(void)invocationMethod: (NSDate *)date;

-(void)countedTimerFireMethod:(NSTimer*)theTimer;

-(NSDictionary *)userInfo;

@end

