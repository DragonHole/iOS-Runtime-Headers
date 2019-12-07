/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INPersonHandle, NSPersonNameComponents, INImage, NSArray;


@protocol INPersonExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) INPersonHandle * personHandle; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) INImage * image; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * customIdentifier; 
@property (nonatomic,copy) NSArray * aliases; 
@property (assign,nonatomic) long long suggestionType; 
@property (assign,nonatomic) BOOL isMe; 
@property (nonatomic,copy) NSArray * alternatives; 
@required
-(id)init;
-(NSString *)handle;
-(NSString *)displayName;
-(INImage *)image;
-(void)setImage:(id)arg1;
-(long long)suggestionType;
-(INPersonHandle *)personHandle;
-(NSString *)contactIdentifier;
-(NSString *)customIdentifier;
-(void)setCustomIdentifier:(id)arg1;
-(void)setDisplayName:(id)arg1;
-(void)setHandle:(id)arg1;
-(NSArray *)alternatives;
-(NSString *)relationship;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(id)arg1;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1;
-(void)setSuggestionType:(long long)arg1;
-(NSArray *)aliases;
-(void)setContactIdentifier:(id)arg1;
-(void)setRelationship:(id)arg1;
-(void)setAlternatives:(id)arg1;
-(void)setAliases:(id)arg1;
-(void)setPersonHandle:(id)arg1;

@end
