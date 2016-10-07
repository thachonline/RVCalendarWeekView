//
//  MSWeekViewDecoratorChangeDuration.h
//  RVCalendarWeekView
//
//  Created by Jordi Puigdellívol on 7/10/16.
//  Copyright © 2016 revo. All rights reserved.
//

#import "MSWeekViewDecorator.h"
#import "MSDurationChangeIndicator.h"

@protocol MSWeekViewChangeDurationDelegate <NSObject>
-(BOOL)weekView:(MSWeekView*)weekView canChangeDuration:(MSEvent*)event to:(NSDate*)date;
-(void)weekView:(MSWeekView*)weekView event:(MSEvent*)event durationChanged:(NSDate*)startDate endDate:(NSDate*)endDate;
@end

@interface MSWeekViewDecoratorChangeDuration : MSWeekViewDecorator <MSDurationIndicatorDelegate>{
    CGFloat mStartY;
    CGFloat mStartHeight;
}


@property(weak,nonatomic) id<MSWeekViewChangeDurationDelegate> changeDurationDelegate;

+(__kindof MSWeekView*)makeWith:(MSWeekView*)weekView andDelegate:(id<MSWeekViewChangeDurationDelegate>)delegate;

@end
