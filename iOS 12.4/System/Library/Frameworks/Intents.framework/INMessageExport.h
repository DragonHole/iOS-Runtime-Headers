/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, INPerson, NSArray, NSNumber;


@protocol INMessageExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) INPerson * sender; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSDate * dateMessageWasLastRead; 
@property (nonatomic,copy) NSNumber * numberOfAttachments; 
@property (assign,nonatomic) long long messageType; 
@property (assign,nonatomic) long long messageEffectType; 
@required
-(void)setMessageType:(long long)arg1;
-(long long)messageType;
-(void)setNumberOfAttachments:(id)arg1;
-(NSDate *)dateSent;
-(NSNumber *)numberOfAttachments;
-(NSDate *)dateMessageWasLastRead;
-(long long)messageEffectType;
-(void)setDateMessageWasLastRead:(id)arg1;
-(void)setMessageEffectType:(long long)arg1;
-(void)setConversationIdentifier:(id)arg1;
-(NSArray *)recipients;
-(void)setRecipients:(id)arg1;
-(void)setDateSent:(id)arg1;
-(NSString *)conversationIdentifier;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(INPerson *)sender;
-(NSString *)content;
-(void)setContent:(id)arg1;
-(void)setSender:(id)arg1;

@end

