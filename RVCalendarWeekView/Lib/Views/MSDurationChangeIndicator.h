//
//  MSDurationChangeIndicator.h
//  RVCalendarWeekView
//
//  Created by Jordi Puigdellívol on 7/10/16.
//  Copyright © 2016 revo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSEventCell.h"

@protocol MSDurationIndicatorDelegate <NSObject>
-(void)durationIndicatorStartUpdated:(id)sender y:(int)y;
-(void)durationIndicatorEndUpdated:(id)sender y:(int)y;
@end

@interface MSDurationChangeIndicator : UIView{
    BOOL mIsStart;
}

+(MSDurationChangeIndicator*)makeForStartWithCell:(MSEventCell*)cell andDelegate:(id<MSDurationIndicatorDelegate>)delegate;
+(MSDurationChangeIndicator*)makeForEndWithCell:(MSEventCell*)cell andDelegate:(id<MSDurationIndicatorDelegate>)delegate;

@property(weak,nonatomic) id<MSDurationIndicatorDelegate>delegate;
@property(weak,nonatomic) MSEventCell* eventCell;

@end
