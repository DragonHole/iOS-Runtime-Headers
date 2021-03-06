/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIDDisplay/HIDDisplay-Structs.h>
#import <HIDDisplay/HIDDisplayInterface.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface HIDDisplayIOReportingInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;
	CFRunLoopRef _runLoop;
	/*^block*/id _dataHandler;
	/*^block*/id _cancelHandler;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)setDispatchQueue:(id)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(id)getHIDDevices;
-(BOOL)setupIOReporting;
-(void)handleInputData:(IOHIDValueRef)arg1 ;
-(void)setInputDataHandler:(/*^block*/id)arg1 ;
-(BOOL)setOutputData:(id)arg1 error:(id*)arg2 ;
-(void)cancel;
-(void)activate;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
@end

