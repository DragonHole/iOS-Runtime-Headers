/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _CKAcknowledgmentTally : NSObject {

	long long _type;
	NSArray* _senders;
	NSArray* _contacts;

}

@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * senders;               //@synthesize senders=_senders - In the implementation block
@property (nonatomic,copy) NSArray * contacts;              //@synthesize contacts=_contacts - In the implementation block
-(void)setContacts:(NSArray *)arg1 ;
-(void)setSenders:(NSArray *)arg1 ;
-(NSArray *)senders;
-(id)initWithType:(long long)arg1 senders:(id)arg2 ;
-(NSArray *)contacts;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
@end

