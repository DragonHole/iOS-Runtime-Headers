/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PROPlugInFirewallErrorHandler;
@class Protocol;

@interface PROPlugInFirewall : NSObject {

	id<PROPlugInFirewallErrorHandler> errorHandler;
	id protectedObject;
	Protocol* protocol;
	Protocol* secondaryProtocol;

}
+(void)deadMethod;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
-(id)initWithProtectedObject:(id)arg1 protocol:(id)arg2 secondaryProtocol:(id)arg3 errorHandler:(id)arg4 ;
-(void)deadMethod;
-(id)protectedObject;
-(void)dealloc;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

