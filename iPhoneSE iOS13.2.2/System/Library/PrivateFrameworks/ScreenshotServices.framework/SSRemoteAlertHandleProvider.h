/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@protocol SSRemoteAlertHandleProviderDelegate;
@class SBSRemoteAlertHandle, NSString;

@interface SSRemoteAlertHandleProvider : NSObject <SBSRemoteAlertHandleObserver> {

	SBSRemoteAlertHandle* _handle;
	id<SSRemoteAlertHandleProviderDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isActive; 
@property (assign,nonatomic,__weak) id<SSRemoteAlertHandleProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<SSRemoteAlertHandleProviderDelegate>)delegate;
-(void)setDelegate:(id<SSRemoteAlertHandleProviderDelegate>)arg1 ;
-(BOOL)isActive;
-(void)activate;
-(void)prepare;
-(void)preheat;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)screenshotServicesAlertHandle;
-(void)_callDelegate:(/*^block*/id)arg1 ;
-(id)_screenshotServicesServiceAlertDefinition;
@end
