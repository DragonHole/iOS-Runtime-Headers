/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASSettingsTaskOofMessage : ASItem {

	NSNumber* _audience;
	NSNumber* _enabled;
	NSString* _replyMessage;
	NSString* _bodyType;

}

@property (nonatomic,retain) NSNumber * audience;                  //@synthesize audience=_audience - In the implementation block
@property (nonatomic,retain) NSNumber * enabled;                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * replyMessage;              //@synthesize replyMessage=_replyMessage - In the implementation block
@property (nonatomic,retain) NSString * bodyType;                  //@synthesize bodyType=_bodyType - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setBodyType:(NSString *)arg1 ;
-(NSString *)bodyType;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSNumber *)audience;
-(NSString *)replyMessage;
-(void)setAudience:(NSNumber *)arg1 ;
-(void)appliesToInternal:(id)arg1 ;
-(void)appliesToExternalKnown:(id)arg1 ;
-(void)appliesToExternalUnknown:(id)arg1 ;
-(void)setReplyMessage:(NSString *)arg1 ;
-(id)description;
-(void)setEnabled:(NSNumber *)arg1 ;
-(NSNumber *)enabled;
@end

