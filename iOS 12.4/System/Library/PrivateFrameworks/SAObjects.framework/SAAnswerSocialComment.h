/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate;

@interface SAAnswerSocialComment : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialComment;
+(id)socialCommentWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

