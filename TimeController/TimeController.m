//
//  TimeController.m
//  TimeController
//
//  Created by MacMan on 10/29/15.
//  Copyright © 2015 MacManApp. All rights reserved.
//

#import "TimeController.h"

@implementation TimeController
-(NSDictionary *)userInfo {
    return @{ @"StarDate" : [NSDate date] };
    
}

-(void)tartMethod: (NSTimer*)theTimer{
    NSDate *startDate = [[theTimer userInfo] objectForKey:@"StartDate"];
    NSLog(@"Timer startd on %@", startDate);
}

-(void)invocationMethod:(NSDate *)date {
    NSLog(@"Invocation for timer started on %@",date);
    
}



@end
