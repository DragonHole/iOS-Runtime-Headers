/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString, NSDate;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _location;
	NSString* _relatedUniqueIdentifier;
	unsigned long long _view;

}

@property (nonatomic,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long view;              //@synthesize view=_view - In the implementation block
-(id)eventFromStore:(id)arg1 ;
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 ;
-(void)updateActivity:(id)arg1 ;
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 forceLocal:(BOOL)arg3 ;
-(id)dictionary;
-(unsigned long long)view;
-(NSString *)title;
-(id)initWithDictionary:(id)arg1 ;
@end

