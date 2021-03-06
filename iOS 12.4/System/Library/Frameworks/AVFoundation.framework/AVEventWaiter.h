/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface AVEventWaiter : NSObject {

	NSCondition* _condition;
	BOOL _eventCompleted;

}
-(void)markEventAsCompleted;
-(void)waitUntilEventIsCompleted;
-(id)init;
-(void)dealloc;
@end

