/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)screenshotServicesAlertHandle;
-(void)_callDelegate:(/*^block*/id)arg1 ;
-(id)_screenshotServicesServiceAlertDefinition;
-(id)init;
-(void)setDelegate:(id<SSRemoteAlertHandleProviderDelegate>)arg1 ;
-(BOOL)isActive;
-(id<SSRemoteAlertHandleProviderDelegate>)delegate;
-(void)invalidate;
-(void)prepare;
-(void)activate;
@end

