/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface RKConversationTurn : NSObject {

	NSString* _text;
	NSString* _senderId;
	NSDate* _timestamp;

}

@property (readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (readonly) NSString * senderId;              //@synthesize senderId=_senderId - In the implementation block
@property (readonly) NSDate * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)senderId;
-(id)initWithString:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3 ;
-(NSString *)text;
-(NSDate *)timestamp;
@end

