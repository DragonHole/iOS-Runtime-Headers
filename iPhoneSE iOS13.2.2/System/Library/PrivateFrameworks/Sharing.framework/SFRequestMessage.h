/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFMessage.h>

@interface SFRequestMessage : SFMessage {

	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)invalidate;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
@end
