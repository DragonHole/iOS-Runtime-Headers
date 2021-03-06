/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, SAReminderTrigger;

@interface SAReminderListSearch : SADomainCommand

@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAReminderTrigger * trigger; 
+(id)listSearch;
+(id)listSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)groupIdentifier;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(SAReminderTrigger *)trigger;
@end

