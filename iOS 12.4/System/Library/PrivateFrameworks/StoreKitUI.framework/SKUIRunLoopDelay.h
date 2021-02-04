/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface SKUIRunLoopDelay : NSObject {

	NSString* _mode;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	double _timeout;

}
-(id)initWithRunLoopMode:(id)arg1 timeout:(double)arg2 ;
-(void)delayRunLoop;
-(void)endDelay;
-(void)dealloc;
@end
