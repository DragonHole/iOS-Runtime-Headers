/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSViewModel.h>

@class NSURL, VSMessageQueue;

@interface VSWebAuthenticationViewModel : VSViewModel {

	NSURL* _sourceURL;
	VSMessageQueue* _messagesToWeb;
	VSMessageQueue* _messagesFromWeb;

}

@property (nonatomic,copy) NSURL * sourceURL;                                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesToWeb;                //@synthesize messagesToWeb=_messagesToWeb - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesFromWeb;              //@synthesize messagesFromWeb=_messagesFromWeb - In the implementation block
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(VSMessageQueue *)messagesToWeb;
-(VSMessageQueue *)messagesFromWeb;
-(id)init;
@end

