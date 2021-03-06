/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSPushHandlerContract;
@class AMSPushHandler;

@interface FCAMSPushHandler : NSObject {

	id<AMSPushHandlerContract> _contract;
	AMSPushHandler* _handler;

}

@property (nonatomic,readonly) id<AMSPushHandlerContract> contract;              //@synthesize contract=_contract - In the implementation block
@property (nonatomic,retain) AMSPushHandler * handler;                           //@synthesize handler=_handler - In the implementation block
-(BOOL)shouldHandleNotification:(id)arg1 ;
-(void)handleNotification:(id)arg1 ;
-(BOOL)shouldHandleNotificationResponse:(id)arg1 ;
-(id<AMSPushHandlerContract>)contract;
-(void)handleNotificationResponse:(id)arg1 ;
-(id)init;
-(AMSPushHandler *)handler;
-(void)setHandler:(AMSPushHandler *)arg1 ;
@end

