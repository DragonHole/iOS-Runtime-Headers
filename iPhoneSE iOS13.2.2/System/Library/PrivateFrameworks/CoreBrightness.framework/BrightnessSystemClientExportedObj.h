/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BacklightSystemDelegateXpcProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, BrightnessSystemClientInternal, NSString;

@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol> {

	/*^block*/id clientBlock;
	NSObject*<OS_dispatch_queue> queue;
	BrightnessSystemClientInternal* _target;

}

@property (assign,nonatomic) BrightnessSystemClientInternal * target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setTarget:(BrightnessSystemClientInternal *)arg1 ;
-(BrightnessSystemClientInternal *)target;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)notifyChangedProperty:(id)arg1 value:(id)arg2 ;
-(void)unregisterNotificationBlock;
@end

