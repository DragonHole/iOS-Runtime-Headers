/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@interface EKEventFacebookButtonDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)layoutCellsForWidth:(double)arg1 position:(int)arg2 ;
-(void)reset;
@end

