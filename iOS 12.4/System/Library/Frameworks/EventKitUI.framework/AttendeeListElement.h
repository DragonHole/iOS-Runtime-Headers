/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableAttributedString;

@interface AttendeeListElement : NSObject {

	BOOL _xMore;
	NSMutableAttributedString* _string;

}

@property (retain) NSMutableAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (assign) BOOL xMore;                                      //@synthesize xMore=_xMore - In the implementation block
-(BOOL)xMore;
-(void)setXMore:(BOOL)arg1 ;
-(NSMutableAttributedString *)string;
-(void)setString:(NSMutableAttributedString *)arg1 ;
@end
