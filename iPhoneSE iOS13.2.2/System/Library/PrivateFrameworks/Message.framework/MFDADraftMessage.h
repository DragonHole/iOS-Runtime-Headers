/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailMessage.h>

@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage {

	MFMailMessage* _message;
	unsigned long long _clientID;
	NSString* _bodyData;

}
-(id)date;
-(id)to;
-(id)from;
-(id)subject;
-(id)body;
-(void)setClientID:(unsigned long long)arg1 ;
-(id)clientID;
-(id)serverID;
-(id)cc;
-(id)bcc;
-(id)messageIDHeader;
-(id)initWithMailMessage:(id)arg1 clientID:(unsigned long long)arg2 ;
-(id)replyTo;
-(int)bodyType;
@end
