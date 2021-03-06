/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol SFQueueingServiceViewControllerProxyDelegate;
@class NSMutableArray, Protocol;

@interface SFQueueingServiceViewControllerProxy : NSProxy {

	NSMutableArray* _queuedInvocations;
	Protocol* _protocol;
	id _target;
	id<SFQueueingServiceViewControllerProxyDelegate> _delegate;

}

@property (nonatomic,retain) id target;                                                                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic,__weak) id<SFQueueingServiceViewControllerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProtocol:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setDelegate:(id<SFQueueingServiceViewControllerProxyDelegate>)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<SFQueueingServiceViewControllerProxyDelegate>)delegate;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

